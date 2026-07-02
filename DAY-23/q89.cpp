#include <iostream>
#include <string>
using namespace std;

// Find the first character that does not repeat anywhere in the string
char firstNonRepeating(string str) {
    int n = str.length();
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (str[j] == str[i]) {
                count++;
            }
        }
        if (count == 1) {
            return str[i];
        }
    }
    return '\0';  // no non-repeating character found
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    char result = firstNonRepeating(str);
    if (result != '\0') {
        cout << "First non-repeating character: " << result << endl;
    } else {
        cout << "There is no non-repeating character." << endl;
    }

    return 0;
}
