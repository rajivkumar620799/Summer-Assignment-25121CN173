#include <iostream>
#include <string>
using namespace std;

// Student record system using arrays and strings.
// Stores roll number, name and marks of several subjects, then reports results.
struct Student {
    int rollNo;
    string name;
    int marks[5];
    int total;
    float percentage;
};

int main() {
    int n;
    const int SUBJECTS = 5;

    cout << "=== Student Record System (Arrays & Strings) ===" << endl;
    cout << "Enter the number of students: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid number of students." << endl;
        return 0;
    }

    Student students[100];

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        cout << "Roll No: ";
        cin >> students[i].rollNo;
        cin.ignore();
        cout << "Name: ";
        getline(cin, students[i].name);

        students[i].total = 0;
        cout << "Enter marks of " << SUBJECTS << " subjects:" << endl;
        for (int j = 0; j < SUBJECTS; j++) {
            cin >> students[i].marks[j];
            students[i].total += students[i].marks[j];
        }
        students[i].percentage = students[i].total / (float)SUBJECTS;
    }

    cout << "\n=== Result Sheet ===" << endl;
    cout << "Roll\tName\t\tTotal\tPercentage\tResult" << endl;
    for (int i = 0; i < n; i++) {
        string result = (students[i].percentage >= 40) ? "PASS" : "FAIL";
        cout << students[i].rollNo << "\t" << students[i].name << "\t\t"
             << students[i].total << "\t" << students[i].percentage << "%\t\t"
             << result << endl;
    }

    return 0;
}
