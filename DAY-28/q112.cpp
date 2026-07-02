#include <iostream>
#include <string>
using namespace std;

// Menu-driven contact management system using an array of contact structures.
struct Contact {
    string name;
    string phone;
    string email;
};

int main() {
    Contact contacts[100];
    int count = 0;
    int choice;

    cout << "=== Contact Management System ===" << endl;

    while (true) {
        cout << "\n1. Add Contact" << endl;
        cout << "2. Display Contacts" << endl;
        cout << "3. Search Contact" << endl;
        cout << "4. Delete Contact" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        if (!(cin >> choice)) break;
        cin.ignore();

        if (choice == 1) {
            if (count >= 100) { cout << "Contact list is full." << endl; continue; }
            cout << "Enter name: ";
            getline(cin, contacts[count].name);
            cout << "Enter phone: ";
            getline(cin, contacts[count].phone);
            cout << "Enter email: ";
            getline(cin, contacts[count].email);
            count++;
            cout << "Contact added successfully." << endl;
        } else if (choice == 2) {
            if (count == 0) { cout << "No contacts to display." << endl; continue; }
            cout << "\nName\t\tPhone\t\tEmail" << endl;
            for (int i = 0; i < count; i++) {
                cout << contacts[i].name << "\t\t" << contacts[i].phone
                     << "\t" << contacts[i].email << endl;
            }
        } else if (choice == 3) {
            string name; bool found = false;
            cout << "Enter name to search: ";
            getline(cin, name);
            for (int i = 0; i < count; i++) {
                if (contacts[i].name == name) {
                    cout << "Found: " << contacts[i].name << " | "
                         << contacts[i].phone << " | " << contacts[i].email << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Contact not found." << endl;
        } else if (choice == 4) {
            string name; bool found = false;
            cout << "Enter name to delete: ";
            getline(cin, name);
            for (int i = 0; i < count; i++) {
                if (contacts[i].name == name) {
                    // Shift the remaining contacts one position to the left
                    for (int j = i; j < count - 1; j++) {
                        contacts[j] = contacts[j + 1];
                    }
                    count--;
                    found = true;
                    cout << "Contact deleted." << endl;
                    break;
                }
            }
            if (!found) cout << "Contact not found." << endl;
        } else if (choice == 5) {
            cout << "Exiting contact manager. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
