#include <iostream>
using namespace std;

// A simple ATM simulation with balance check, deposit and withdraw options.
int main() {
    double balance = 5000.0;  // starting balance
    int choice;

    cout << "=== ATM Simulation ===" << endl;

    while (true) {
        cout << "\n1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "\nNo more input. Exiting." << endl;
            break;
        }

        if (choice == 1) {
            cout << "Your current balance is: " << balance << endl;
        } else if (choice == 2) {
            double amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if (amount > 0) {
                balance += amount;
                cout << "Deposited successfully. New balance: " << balance << endl;
            } else {
                cout << "Invalid amount." << endl;
            }
        } else if (choice == 3) {
            double amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount <= 0) {
                cout << "Invalid amount." << endl;
            } else if (amount > balance) {
                cout << "Insufficient balance." << endl;
            } else {
                balance -= amount;
                cout << "Withdrawn successfully. New balance: " << balance << endl;
            }
        } else if (choice == 4) {
            cout << "Thank you for using the ATM. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
