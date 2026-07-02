#include <iostream>
#include <string>
using namespace std;

// Marksheet generation system: reads marks of subjects and prints total,
// percentage and grade for a student.
char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 75) return 'B';
    else if (percentage >= 60) return 'C';
    else if (percentage >= 40) return 'D';
    else return 'F';
}

int main() {
    string name;
    int numSubjects;

    cout << "=== Marksheet Generation System ===" << endl;
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    if (numSubjects <= 0 || numSubjects > 20) {
        cout << "Invalid number of subjects." << endl;
        return 0;
    }

    float marks[20];
    float total = 0;
    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter marks for subject " << i + 1 << " (out of 100): ";
        cin >> marks[i];
        total += marks[i];
    }

    float percentage = total / numSubjects;
    char grade = calculateGrade(percentage);

    cout << "\n=========== MARKSHEET ===========" << endl;
    cout << "Name        : " << name << endl;
    cout << "Subjects    : " << numSubjects << endl;
    cout << "Total Marks : " << total << " / " << (numSubjects * 100) << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;
    cout << "Result      : " << (grade == 'F' ? "FAIL" : "PASS") << endl;
    cout << "=================================" << endl;

    return 0;
}
