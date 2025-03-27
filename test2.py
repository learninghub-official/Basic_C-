notes_and_in_stock_amount_in_atm = [
    [1000, 20],
    [500, 10],
    [200, 5],
    [50, 2],
    [20, 5],
]

def withdraw_money(amount):
    withdrawal_result = []  # Use a list to retain the order
    total_stock = 0

    # Calculate the total stock in the ATM
    for note in notes_and_in_stock_amount_in_atm:
        total_stock += note[0] * note[1]

    # Check if the amount is valid and can be dispensed
    if amount % 10 != 0:
        print("Please provide a valid amount (multiples of 10 only).")
        return
    if amount > total_stock:
        print("Cannot dispense this amount. Not enough stock.")
        return

    # Dispense notes
    for note in notes_and_in_stock_amount_in_atm:
        note_value = note[0]
        available_notes = note[1]

        if amount >= note_value and available_notes > 0:
            notes_to_dispense = min(amount // note_value, available_notes)
            if notes_to_dispense > 0:
                withdrawal_result.append([note_value, notes_to_dispense])
                note[1] -= notes_to_dispense
                amount -= notes_to_dispense * note_value

    # Final check: If there's any remaining amount that couldn't be dispensed
    if amount > 0:
        print("Cannot dispense the exact amount with available notes.")
        return

    print("Transaction Successful!")
    print("Notes Dispensed:", ", ".join(f"{note[0]}: {note[1]}" for note in withdrawal_result))
    print("Remaining Stock:", notes_and_in_stock_amount_in_atm)

# Test cases
withdraw_money(2120)  # First transaction
withdraw_money(6520)  # Second transaction
withdraw_money(10000) # Third transaction
withdraw_money(23000) # Fourth transaction
