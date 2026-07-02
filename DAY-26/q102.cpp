#include <iostream>
#include <string>
using namespace std;

// Voting eligibility system: a citizen can vote if they are 18 years or older.
int main() {
    string name;
    int age;

    cout << "=== Voting Eligibility System ===" << endl;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age entered." << endl;
        return 0;
    }

    cout << "\nHello, " << name << "!" << endl;
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are NOT eligible to vote." << endl;
        cout << "You can vote after " << (18 - age) << " more year(s)." << endl;
    }

    return 0;
}
