#include <iostream>
#include <string>
using namespace std;

// Convert all lowercase letters in the string to uppercase
void toUpperCase(string &str) {
    for (int i = 0; i < (int)str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Difference between 'a' and 'A' is 32 in ASCII
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    toUpperCase(str);

    cout << "Uppercase string: " << str << endl;

    return 0;
}
