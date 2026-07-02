#include <iostream>
#include <string>
using namespace std;

// Menu-driven bank account system supporting multiple accounts.
struct Account {
    int accNo;
    string name;
    double balance;
};

// Find an account by number; returns its index or -1 if not found.
int findAccount(Account accounts[], int count, int accNo) {
    for (int i = 0; i < count; i++) {
        if (accounts[i].accNo == accNo) {
            return i;
        }
    }
    return -1;
}

int main() {
    Account accounts[100];
    int count = 0;
    int choice;

    cout << "=== Bank Account System ===" << endl;

    while (true) {
        cout << "\n1. Create Account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Display All Accounts" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        if (!(cin >> choice)) break;

        if (choice == 1) {
            if (count >= 100) { cout << "Cannot create more accounts." << endl; continue; }
            cout << "Enter account number: ";
            cin >> accounts[count].accNo;
            cin.ignore();
            cout << "Enter account holder name: ";
            getline(cin, accounts[count].name);
            cout << "Enter opening balance: ";
            cin >> accounts[count].balance;
            count++;
            cout << "Account created successfully." << endl;
        } else if (choice == 2) {
            int accNo; double amount;
            cout << "Enter account number: ";
            cin >> accNo;
            int idx = findAccount(accounts, count, accNo);
            if (idx == -1) { cout << "Account not found." << endl; continue; }
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if (amount > 0) {
                accounts[idx].balance += amount;
                cout << "New balance: " << accounts[idx].balance << endl;
            } else cout << "Invalid amount." << endl;
        } else if (choice == 3) {
            int accNo; double amount;
            cout << "Enter account number: ";
            cin >> accNo;
            int idx = findAccount(accounts, count, accNo);
            if (idx == -1) { cout << "Account not found." << endl; continue; }
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount <= 0) cout << "Invalid amount." << endl;
            else if (amount > accounts[idx].balance) cout << "Insufficient balance." << endl;
            else {
                accounts[idx].balance -= amount;
                cout << "New balance: " << accounts[idx].balance << endl;
            }
        } else if (choice == 4) {
            if (count == 0) { cout << "No accounts to display." << endl; continue; }
            cout << "\nAcc No\tName\t\tBalance" << endl;
            for (int i = 0; i < count; i++) {
                cout << accounts[i].accNo << "\t" << accounts[i].name
                     << "\t\t" << accounts[i].balance << endl;
            }
        } else if (choice == 5) {
            cout << "Thank you for banking with us!" << endl;
            break;
        } else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
