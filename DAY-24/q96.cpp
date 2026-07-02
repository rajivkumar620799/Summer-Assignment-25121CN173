#include <iostream>
#include <string>
using namespace std;

// Remove duplicate characters, keeping the first occurrence of each character
string removeDuplicates(string str) {
    bool seen[256] = { false };
    string result = "";
    for (int i = 0; i < (int)str.length(); i++) {
        unsigned char c = str[i];
        if (!seen[c]) {
            result += str[i];
            seen[c] = true;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "String after removing duplicate characters: " << removeDuplicates(str) << endl;

    return 0;
}
