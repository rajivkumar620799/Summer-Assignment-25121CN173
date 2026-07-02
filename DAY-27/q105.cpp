#include <iostream>
#include <string>
using namespace std;

// Student record management system using a structure and an array of records.
struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    int n;
    cout << "=== Student Record Management System ===" << endl;
    cout << "Enter the number of students: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid number of students." << endl;
        return 0;
    }

    Student students[100];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        cout << "Roll No: ";
        cin >> students[i].rollNo;
        cin.ignore();
        cout << "Name: ";
        getline(cin, students[i].name);
        cout << "Marks: ";
        cin >> students[i].marks;
    }

    cout << "\n=== Student Records ===" << endl;
    cout << "Roll No\tName\t\tMarks" << endl;
    for (int i = 0; i < n; i++) {
        cout << students[i].rollNo << "\t"
             << students[i].name << "\t\t"
             << students[i].marks << endl;
    }

    return 0;
}
