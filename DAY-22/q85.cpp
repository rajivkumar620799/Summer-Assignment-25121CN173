#include <iostream>
#include <string>
using namespace std;

// A string is a palindrome if it reads the same forwards and backwards
bool isPalindrome(string str) {
    int i = 0;
    int j = str.length() - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (isPalindrome(str)) {
        cout << "\"" << str << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << str << "\" is NOT a palindrome." << endl;
    }

    return 0;
}
