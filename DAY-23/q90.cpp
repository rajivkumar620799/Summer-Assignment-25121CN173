#include <iostream>
#include <string>
using namespace std;

// Find the first character that repeats (its first occurrence appears again later)
char firstRepeating(string str) {
    int n = str.length();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] == str[j]) {
                return str[i];
            }
        }
    }
    return '\0';  // no repeating character found
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    char result = firstRepeating(str);
    if (result != '\0') {
        cout << "First repeating character: " << result << endl;
    } else {
        cout << "There is no repeating character." << endl;
    }

    return 0;
}
