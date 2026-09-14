# ATM-Menu-Program
A modular, console-based banking application written in C++ that simulates standard Automated Teller Machine (ATM) transactions using structured logic and object-oriented practices.

## 🚀 Features
- **Real-Time Balance Checks:** Instantly displays current account valuations.
- **Overdraft Protection:** Validates withdrawal quantities against current capital limits to block negative balances.
- **Monetary Formatting:** Leverages `<iomanip>` utilities to ensure currency values cleanly display with two decimal spaces.
- **Persistent Loop Menu:** Operates inside a `do-while` control ring so users can complete multiple transactions in a single session.

## 🛠️ System Architecture (Functions)
The workspace divides banking transactions into isolated logic blocks:
* `showMenu()`: Displays the user interface choices on the command screen.
* `checkBalance()`: Reads and logs the active balance tracking float.
* `depositMoney()`: Validates incoming deposit variables and updates the account sum.
* `withdrawMoney()`: Screens debt criteria, reviews capital thresholds, and performs safe subtractions.

## 📋 Prerequisites
Ensure a modern standard C++ compiler is configured in your terminal environment:
- **GCC / G++** (Linux/Mac)
- **MinGW / MSVC** (Windows)
- Alternately, any standard IDE (VS Code with C++ extension, Code::Blocks, CLion)

## 💻 How to Run

1. **Clone the project repository:**
   ```bash
   git clone https://github.com
   cd YOUR_REPO_NAME
   ```

2. **Compile the source code:**
   ```bash
   g++ atm_system.cpp -o atm_system
   ```

3. **Execute the compiled binary:**
   ```bash
   ./atm_system
   ```

## 📸 Sample Application Run
```text
========== ATM MENU ==========
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
==============================
Enter your choice: 3

Enter withdrawal amount: \$1200.00
Insufficient funds! Your balance is only \$1000.00
```

## 📄 License
This repository is completely open-source and free to distribute under the terms of the [MIT License](LICENSE).
