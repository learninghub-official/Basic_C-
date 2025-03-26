// let notesInATMMachine = {1000: 3, 500: 10, 200: 5, 50: 3, 20: 12};

// function withdrawMoney(amount) {
//     if (amount % 10 !== 0) {
//         console.log(`Cannot dispense ₹${amount}. Please enter a valid amount (multiples of 10).`);
//         return;
//     }

//     let remainingAmount = amount;
//     let dispensedNotes = {};
//     let availableNotes = { ...notesInATMMachine }; // Clone original notes

//     for (let note of Object.keys(availableNotes).map(Number).sort((a, b) => b - a)) {
//         let requiredNotes = Math.floor(remainingAmount / note);
//         let givenNotes = Math.min(requiredNotes, availableNotes[note]);

//         if (givenNotes > 0) {
//             dispensedNotes[note] = givenNotes;
//             remainingAmount -= givenNotes * note;
//             availableNotes[note] -= givenNotes;
//         }
//     }

//     if (remainingAmount === 0) {
//         console.log(`Dispensed ₹${amount}:`, dispensedNotes);
//         notesInATMMachine = availableNotes; // Update ATM state
//     } else {
//         console.log(`Cannot dispense ₹${amount} due to insufficient denominations.`);
//     }

//     console.log("Remaining notes in ATM:", notesInATMMachine);
// }

// // Get user input for withdrawal amount
// const readline = require("readline").createInterface({
//     input: process.stdin,
//     output: process.stdout
// });

// readline.question("Enter amount to withdraw: ", amount => {
//     withdrawMoney(parseInt(amount));
//     readline.close();
// });


// let notesInATMMachine = {1000: 3, 500: 10, 200: 5, 50: 3, 20: 12};

// function withdrawMoney(amount) {
//     if (amount % 10 !== 0) {
//         console.log(`Invalid amount! Enter a multiple of 10.`);
//         return;
//     }

//     let remainingAmount = amount;
//     let dispensedNotes = {};

//     for (let note of Object.keys(notesInATMMachine).map(Number).sort((a, b) => b - a)) {
//         let notesNeeded = Math.min(Math.floor(remainingAmount / note), notesInATMMachine[note]);
        
//         if (notesNeeded > 0) {
//             dispensedNotes[note] = notesNeeded;
//             remainingAmount -= notesNeeded * note;
//             notesInATMMachine[note] -= notesNeeded;
//         }
//     }

//     if (remainingAmount === 0) {
//         console.log(`Dispensed ₹${amount}:`, dispensedNotes);
//     } else {
//         console.log(`Cannot dispense ₹${amount} due to insufficient denominations.`);
//     }
//     console.log("Remaining notes in ATM:", notesInATMMachine);
// }

// const readline = require("readline").createInterface({
//     input: process.stdin,
//     output: process.stdout
// });

// readline.question("Enter amount to withdraw: ", amount => {
//     withdrawMoney(parseInt(amount));
//     readline.close();
// });




let notesInATM = {1000: 3, 500: 10, 200: 5, 50: 3, 20: 12};

function withdrawMoney(amount) {
    if (amount % 10 !== 0) {
        console.log("Invalid amount! Enter a multiple of 10.");
        return;
    }

    let remainingAmount = amount;
    let dispensedNotes = {};

    for (let note of Object.keys(notesInATM).map(Number).sort((a, b) => b - a)) {
        let notesNeeded = Math.min(Math.floor(remainingAmount / note), notesInATM[note]);

        if (notesNeeded > 0) {
            dispensedNotes[note] = notesNeeded;
            remainingAmount -= notesNeeded * note;
            notesInATM[note] -= notesNeeded;
        }
    }

    if (remainingAmount === 0) {
        console.log(`Dispensed ₹${amount}:`, dispensedNotes);
    } else {
        console.log(`Cannot dispense ₹${amount} due to insufficient denominations.`);
    }
    console.log("Remaining notes in ATM:", notesInATM);
}

// Example Usage
withdrawMoney(6520);
withdrawMoney(3000);
withdrawMoney(20001);
