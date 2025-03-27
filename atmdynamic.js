function getUserInputStock() {
    let notesAndStock = {}; // Object to store the denomination and count
    let numOfDenominations = parseInt(prompt("Enter the number of different denominations available: "), 10);

    for (let i = 0; i < numOfDenominations; i++) {
        let note = parseInt(prompt(`Enter denomination ${i + 1}: `), 10);
        let count = parseInt(prompt(`Enter count of ${note} notes: `), 10);
        notesAndStock[note] = count;
    }

    return notesAndStock; // Return the stock data
}

function withdrawMoney(amount, notesAndStock) {
    let withdrawalResult = [];
    let totalStock = Object.entries(notesAndStock).reduce((sum, [note, count]) => sum + note * count, 0);

    if (amount % 10 !== 0) {
        console.log("Please provide a valid amount (multiples of 10 only).");
        return;
    }
    if (amount > totalStock) {
        console.log("Cannot dispense this amount. Not enough stock.");
        return;
    }

    let sortedNotes = Object.keys(notesAndStock).map(Number).sort((a, b) => b - a); // Sort from largest to smallest

  // let sortedNotes=Object.keys(notesAndStock).sort((a,b)=>b-a)
        // console.log(sortedNotes) // It give string output but we need integer so we have used "Number" with map


 // for (let i = 0; i < numberOfDenominations; i++) { cannot use this
    for (let note of sortedNotes) {     //i resembles note 
        let availableNotes = notesAndStock[note];

        if (amount >= note && availableNotes > 0) {
            let notesToDispense = Math.min(Math.floor(amount / note), availableNotes);
            if (notesToDispense > 0) {
                withdrawalResult.push([note, notesToDispense]);
                notesAndStock[note] -= notesToDispense; // Update stock
                amount -= notesToDispense * note; // Reduce amount
            }
        }
    }

    // to check if there is any remaining amount of which we don't have the note.
    if (amount > 0) {
        console.log("Cannot dispense the exact amount with available notes.");
        return;
    }

    console.log("Transaction Successful!");
    console.log(`Remaining Balance: ${totalStock - amount}`)
    console.log("Notes Dispensed:", withdrawalResult.map(n => `${n[0]}: ${n[1]}`).join(", "));
    console.log("Remaining Stock:", notesAndStock);
}

// Get ATM stock from user input
let notesAndStock = getUserInputStock();

// Loop for multiple withdrawals
while (true) {
    let amount = parseInt(prompt("Enter withdrawal amount (or type 0 to exit): "), 10);
    if (amount === 0) break; // Exit loop if user enters 0
    withdrawMoney(amount, notesAndStock);
}
