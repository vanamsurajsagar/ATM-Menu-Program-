#include <iostream>
#include <iomanip> // Used for formatting decimal currency output

// Function declarations
void showMenu();
void checkBalance(double balance);
double depositMoney(double balance);
double withdrawMoney(double balance);

int main() {
    int choice;
    double accountBalance = 1000.00; // Starting default balance

    // Configure console output to always show 2 decimal places for currency
    std::cout << std::fixed << std::setprecision(2);

    do {
        showMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                checkBalance(accountBalance);
                break;
            case 2:
                accountBalance = depositMoney(accountBalance);
                break;
            case 3:
                accountBalance = withdrawMoney(accountBalance);
                break;
            case 4:
                std::cout << "\nThank you for using our ATM. Goodbye!\n";
                break;
            default:
                std::cout << "\nInvalid choice! Please choose an option from 1 to 4.\n";
        }
    } while (choice != 4);

    return 0;
}

// Function to print the standard ATM interface menu
void showMenu() {
    std::cout << "\n========== ATM MENU ==========\n";
    std::cout << "1. Check Balance\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Withdraw Money\n";
    std::cout << "4. Exit\n";
    std::cout << "==============================\n";
    std::cout << "Enter your choice: ";
}

// Function to print the current balance status
void checkBalance(double balance) {
    std::cout << "\nYour current balance is: $" << balance << "\n";
}

// Function to credit funds to the balance variable
double depositMoney(double balance) {
    double amount;
    std::cout << "\nEnter deposit amount: $";
    std::cin >> amount;

    if (amount > 0) {
        balance += amount;
        std::cout << "$" << amount << " deposited successfully.\n";
    } else {
        std::cout << "Invalid amount! Deposit must be greater than zero.\n";
    }
    return balance;
}

// Function to debit funds with safe overdraft checks
double withdrawMoney(double balance) {
    double amount;
    std::cout << "\nEnter withdrawal amount: $";
    std::cin >> amount;

    if (amount <= 0) {
        std::cout << "Invalid amount! Withdrawal must be greater than zero.\n";
    } else if (amount > balance) {
        std::cout << "Insufficient funds! Your balance is only $" << balance << "\n";
    } else {
        balance -= amount;
        std::cout << "$" << amount << " withdrawn successfully.\n";
    }
    return balance;
}
