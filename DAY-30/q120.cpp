#include <iostream>
#include <string>
using namespace std;

// ============================================================================
// Complete Mini Project: Student Management System
// Demonstrates the use of arrays, strings and functions together.
// Features: add student, display all, search by name, sort by marks,
//           class average and topper.
// ============================================================================

struct Student {
    int rollNo;
    string name;
    float marks;
};

Student students[100];
int count = 0;

void addStudent() {
    if (count >= 100) { cout << "Database is full." << endl; return; }
    cout << "Enter roll number: ";
    cin >> students[count].rollNo;
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, students[count].name);
    cout << "Enter marks: ";
    cin >> students[count].marks;
    count++;
    cout << "Student added successfully." << endl;
}

void displayAll() {
    if (count == 0) { cout << "No records found." << endl; return; }
    cout << "\nRoll\tName\t\tMarks" << endl;
    for (int i = 0; i < count; i++) {
        cout << students[i].rollNo << "\t" << students[i].name
             << "\t\t" << students[i].marks << endl;
    }
}

void searchByName() {
    string name;
    cout << "Enter name to search: ";
    cin.ignore();
    getline(cin, name);
    for (int i = 0; i < count; i++) {
        if (students[i].name == name) {
            cout << "Found -> Roll: " << students[i].rollNo
                 << ", Marks: " << students[i].marks << endl;
            return;
        }
    }
    cout << "Student not found." << endl;
}

void sortByMarks() {
    // Bubble sort in descending order of marks
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (students[j].marks < students[j + 1].marks) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    cout << "Records sorted by marks (highest first)." << endl;
}

void statistics() {
    if (count == 0) { cout << "No records found." << endl; return; }
    float total = 0;
    int topper = 0;
    for (int i = 0; i < count; i++) {
        total += students[i].marks;
        if (students[i].marks > students[topper].marks) topper = i;
    }
    cout << "Class average: " << total / count << endl;
    cout << "Topper: " << students[topper].name
         << " (" << students[topper].marks << ")" << endl;
}

int main() {
    int choice;
    cout << "===== Student Management Mini Project =====" << endl;

    while (true) {
        cout << "\n1. Add Student" << endl;
        cout << "2. Display All" << endl;
        cout << "3. Search by Name" << endl;
        cout << "4. Sort by Marks" << endl;
        cout << "5. Statistics (Average & Topper)" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";

        if (!(cin >> choice)) break;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: searchByName(); break;
            case 4: sortByMarks(); break;
            case 5: statistics(); break;
            case 6: cout << "Exiting project. Goodbye!" << endl; return 0;
            default: cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
