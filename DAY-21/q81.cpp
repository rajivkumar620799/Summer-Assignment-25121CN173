#include <iostream>
using namespace std;

// Find the length of a string without using the built-in strlen() function
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    cout << "Enter a string (no spaces): ";
    cin >> str;

    cout << "Length of the string is: " << stringLength(str) << endl;

    return 0;
}
