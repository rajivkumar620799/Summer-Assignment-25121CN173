#include <iostream>
#include <string>
using namespace std;

// Menu-driven library management system using an array of book structures.
struct Book {
    int id;
    string title;
    string author;
    bool issued;
};

int main() {
    Book books[100];
    int count = 0;
    int choice;

    cout << "=== Library Management System ===" << endl;

    while (true) {
        cout << "\n1. Add Book" << endl;
        cout << "2. Display Books" << endl;
        cout << "3. Issue Book" << endl;
        cout << "4. Return Book" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        if (!(cin >> choice)) break;

        if (choice == 1) {
            if (count >= 100) { cout << "Library is full." << endl; continue; }
            cout << "Enter book ID: ";
            cin >> books[count].id;
            cin.ignore();
            cout << "Enter title: ";
            getline(cin, books[count].title);
            cout << "Enter author: ";
            getline(cin, books[count].author);
            books[count].issued = false;
            count++;
            cout << "Book added successfully." << endl;
        } else if (choice == 2) {
            if (count == 0) { cout << "No books available." << endl; continue; }
            cout << "\nID\tTitle\t\tAuthor\t\tStatus" << endl;
            for (int i = 0; i < count; i++) {
                cout << books[i].id << "\t" << books[i].title << "\t\t"
                     << books[i].author << "\t\t"
                     << (books[i].issued ? "Issued" : "Available") << endl;
            }
        } else if (choice == 3) {
            int id; bool found = false;
            cout << "Enter book ID to issue: ";
            cin >> id;
            for (int i = 0; i < count; i++) {
                if (books[i].id == id) {
                    found = true;
                    if (books[i].issued) cout << "Book is already issued." << endl;
                    else { books[i].issued = true; cout << "Book issued successfully." << endl; }
                    break;
                }
            }
            if (!found) cout << "Book not found." << endl;
        } else if (choice == 4) {
            int id; bool found = false;
            cout << "Enter book ID to return: ";
            cin >> id;
            for (int i = 0; i < count; i++) {
                if (books[i].id == id) {
                    found = true;
                    if (!books[i].issued) cout << "Book was not issued." << endl;
                    else { books[i].issued = false; cout << "Book returned successfully." << endl; }
                    break;
                }
            }
            if (!found) cout << "Book not found." << endl;
        } else if (choice == 5) {
            cout << "Exiting library system. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
