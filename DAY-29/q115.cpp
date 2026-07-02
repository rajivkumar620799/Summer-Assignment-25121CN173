#include <iostream>
#include <string>
using namespace std;

// Menu-driven string operations system: length, reverse, uppercase, palindrome.
int main() {
    string str = "";
    int choice;

    cout << "=== Menu-Driven String Operations ===" << endl;

    while (true) {
        cout << "\n1. Enter String" << endl;
        cout << "2. Find Length" << endl;
        cout << "3. Reverse String" << endl;
        cout << "4. Convert to Uppercase" << endl;
        cout << "5. Check Palindrome" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";

        if (!(cin >> choice)) break;
        cin.ignore();

        if (choice == 1) {
            cout << "Enter a string: ";
            getline(cin, str);
            cout << "String stored." << endl;
        } else if (choice == 2) {
            cout << "Length = " << str.length() << endl;
        } else if (choice == 3) {
            string rev = str;
            int i = 0, j = rev.length() - 1;
            while (i < j) { swap(rev[i], rev[j]); i++; j--; }
            cout << "Reversed: " << rev << endl;
        } else if (choice == 4) {
            string up = str;
            for (int i = 0; i < (int)up.length(); i++) {
                if (up[i] >= 'a' && up[i] <= 'z') up[i] -= 32;
            }
            cout << "Uppercase: " << up << endl;
        } else if (choice == 5) {
            int i = 0, j = str.length() - 1;
            bool palindrome = true;
            while (i < j) {
                if (str[i] != str[j]) { palindrome = false; break; }
                i++; j--;
            }
            cout << (palindrome ? "It is a palindrome." : "It is NOT a palindrome.") << endl;
        } else if (choice == 6) {
            cout << "Exiting. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
