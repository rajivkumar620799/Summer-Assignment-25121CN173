#include <iostream>
#include <string>
using namespace std;

// Check whether str2 is a rotation of str1.
// Trick: str2 is a rotation of str1 if it is a substring of (str1 + str1).
bool isRotation(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    string doubled = str1 + str1;
    return doubled.find(str2) != string::npos;
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);

    if (isRotation(str1, str2)) {
        cout << "\"" << str2 << "\" is a rotation of \"" << str1 << "\"." << endl;
    } else {
        cout << "\"" << str2 << "\" is NOT a rotation of \"" << str1 << "\"." << endl;
    }

    return 0;
}
