#include <iostream>
using namespace std;

// Menu-driven calculator supporting basic arithmetic operations.
int main() {
    int choice;
    double a, b;

    cout << "=== Menu-Driven Calculator ===" << endl;

    while (true) {
        cout << "\n1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        if (!(cin >> choice)) break;
        if (choice == 5) {
            cout << "Exiting calculator. Goodbye!" << endl;
            break;
        }
        if (choice < 1 || choice > 4) {
            cout << "Invalid choice." << endl;
            continue;
        }

        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch (choice) {
            case 1: cout << "Result: " << a + b << endl; break;
            case 2: cout << "Result: " << a - b << endl; break;
            case 3: cout << "Result: " << a * b << endl; break;
            case 4:
                if (b != 0) cout << "Result: " << a / b << endl;
                else cout << "Error: division by zero." << endl;
                break;
        }
    }

    return 0;
}
