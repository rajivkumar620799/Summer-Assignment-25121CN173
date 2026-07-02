#include <iostream>
#include <string>
using namespace std;

// Employee management system using a structure and an array of records.
struct Employee {
    int id;
    string name;
    string department;
    float salary;
};

int main() {
    int n;
    cout << "=== Employee Management System ===" << endl;
    cout << "Enter the number of employees: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid number of employees." << endl;
        return 0;
    }

    Employee emps[100];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":" << endl;
        cout << "ID: ";
        cin >> emps[i].id;
        cin.ignore();
        cout << "Name: ";
        getline(cin, emps[i].name);
        cout << "Department: ";
        getline(cin, emps[i].department);
        cout << "Salary: ";
        cin >> emps[i].salary;
    }

    cout << "\n=== Employee Records ===" << endl;
    cout << "ID\tName\t\tDepartment\tSalary" << endl;
    for (int i = 0; i < n; i++) {
        cout << emps[i].id << "\t"
             << emps[i].name << "\t\t"
             << emps[i].department << "\t\t"
             << emps[i].salary << endl;
    }

    return 0;
}
