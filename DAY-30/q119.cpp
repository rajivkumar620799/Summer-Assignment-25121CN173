#include <iostream>
#include <string>
using namespace std;

// Mini employee management system using functions and an array of structures.
struct Employee {
    int id;
    string name;
    double salary;
};

Employee emps[100];
int empCount = 0;

void addEmployee() {
    if (empCount >= 100) { cout << "List is full." << endl; return; }
    cout << "Enter employee ID: ";
    cin >> emps[empCount].id;
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, emps[empCount].name);
    cout << "Enter salary: ";
    cin >> emps[empCount].salary;
    empCount++;
    cout << "Employee added." << endl;
}

void displayEmployees() {
    if (empCount == 0) { cout << "No employees to display." << endl; return; }
    cout << "ID\tName\t\tSalary" << endl;
    for (int i = 0; i < empCount; i++) {
        cout << emps[i].id << "\t" << emps[i].name << "\t\t" << emps[i].salary << endl;
    }
}

void searchEmployee() {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;
    for (int i = 0; i < empCount; i++) {
        if (emps[i].id == id) {
            cout << "Found: " << emps[i].name << " | Salary: " << emps[i].salary << endl;
            return;
        }
    }
    cout << "Employee not found." << endl;
}

void highestPaid() {
    if (empCount == 0) { cout << "No employees." << endl; return; }
    int idx = 0;
    for (int i = 1; i < empCount; i++) {
        if (emps[i].salary > emps[idx].salary) idx = i;
    }
    cout << "Highest paid: " << emps[idx].name << " (" << emps[idx].salary << ")" << endl;
}

int main() {
    int choice;
    cout << "=== Mini Employee Management System ===" << endl;

    while (true) {
        cout << "\n1. Add  2. Display  3. Search  4. Highest Paid  5. Exit" << endl;
        cout << "Enter your choice: ";
        if (!(cin >> choice)) break;

        if (choice == 1) addEmployee();
        else if (choice == 2) displayEmployees();
        else if (choice == 3) searchEmployee();
        else if (choice == 4) highestPaid();
        else if (choice == 5) { cout << "Goodbye!" << endl; break; }
        else cout << "Invalid choice." << endl;
    }

    return 0;
}
