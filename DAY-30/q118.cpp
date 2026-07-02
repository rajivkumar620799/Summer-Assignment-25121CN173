#include <iostream>
#include <string>
using namespace std;

// Mini library system: add books, issue, return and search using functions.
struct Book {
    int id;
    string title;
    bool issued;
};

Book library[100];
int bookCount = 0;

void addBook() {
    if (bookCount >= 100) { cout << "Library is full." << endl; return; }
    cout << "Enter book ID: ";
    cin >> library[bookCount].id;
    cin.ignore();
    cout << "Enter book title: ";
    getline(cin, library[bookCount].title);
    library[bookCount].issued = false;
    bookCount++;
    cout << "Book added." << endl;
}

void displayBooks() {
    if (bookCount == 0) { cout << "No books in library." << endl; return; }
    cout << "ID\tTitle\t\tStatus" << endl;
    for (int i = 0; i < bookCount; i++) {
        cout << library[i].id << "\t" << library[i].title << "\t\t"
             << (library[i].issued ? "Issued" : "Available") << endl;
    }
}

void issueBook() {
    int id;
    cout << "Enter book ID to issue: ";
    cin >> id;
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            if (library[i].issued) cout << "Already issued." << endl;
            else { library[i].issued = true; cout << "Book issued." << endl; }
            return;
        }
    }
    cout << "Book not found." << endl;
}

void returnBook() {
    int id;
    cout << "Enter book ID to return: ";
    cin >> id;
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            if (!library[i].issued) cout << "Book was not issued." << endl;
            else { library[i].issued = false; cout << "Book returned." << endl; }
            return;
        }
    }
    cout << "Book not found." << endl;
}

int main() {
    int choice;
    cout << "=== Mini Library System ===" << endl;

    while (true) {
        cout << "\n1. Add Book  2. Display  3. Issue  4. Return  5. Exit" << endl;
        cout << "Enter your choice: ";
        if (!(cin >> choice)) break;

        if (choice == 1) addBook();
        else if (choice == 2) displayBooks();
        else if (choice == 3) issueBook();
        else if (choice == 4) returnBook();
        else if (choice == 5) { cout << "Goodbye!" << endl; break; }
        else cout << "Invalid choice." << endl;
    }

    return 0;
}
