#include <iostream>
#include <string>
using namespace std;

// Salary management system: computes gross and net salary from basic pay.
struct Employee {
    int id;
    string name;
    float basic;
};

int main() {
    int n;
    cout << "=== Salary Management System ===" << endl;
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
        cout << "Basic Salary: ";
        cin >> emps[i].basic;
    }

    cout << "\n=== Salary Slips ===" << endl;
    cout << "ID\tName\t\tBasic\tHRA\tDA\tGross\tNet" << endl;
    for (int i = 0; i < n; i++) {
        float basic = emps[i].basic;
        float hra = 0.20f * basic;   // House Rent Allowance = 20% of basic
        float da  = 0.10f * basic;   // Dearness Allowance   = 10% of basic
        float gross = basic + hra + da;
        float tax = 0.05f * gross;   // 5% tax deduction
        float net = gross - tax;

        cout << emps[i].id << "\t"
             << emps[i].name << "\t\t"
             << basic << "\t" << hra << "\t" << da << "\t"
             << gross << "\t" << net << endl;
    }

    return 0;
}
