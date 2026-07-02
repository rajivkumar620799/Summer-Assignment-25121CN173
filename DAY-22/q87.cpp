#include <iostream>
#include <string>
using namespace std;

// Print the frequency of each character that appears in the string
void characterFrequency(string str) {
    int n = str.length();
    bool counted[256] = { false };  // track characters already printed

    for (int i = 0; i < n; i++) {
        if (counted[(unsigned char)str[i]]) {
            continue;  // already handled this character
        }

        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (str[j] == str[i]) {
                freq++;
            }
        }
        cout << "'" << str[i] << "' = " << freq << endl;
        counted[(unsigned char)str[i]] = true;
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Character frequencies:" << endl;
    characterFrequency(str);

    return 0;
}
