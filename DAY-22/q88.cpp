#include <iostream>
#include <string>
using namespace std;

// Build a new string that contains all characters except spaces
string removeSpaces(string str) {
    string result = "";
    for (int i = 0; i < (int)str.length(); i++) {
        if (str[i] != ' ') {
            result += str[i];
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "String after removing spaces: " << removeSpaces(str) << endl;

    return 0;
}
