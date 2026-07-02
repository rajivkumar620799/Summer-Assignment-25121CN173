#include <iostream>
#include <string>
using namespace std;

// Find characters that are common to both strings (each printed once)
string commonCharacters(string a, string b) {
    bool inA[256] = { false };
    bool added[256] = { false };
    string result = "";

    // Mark every character present in the first string
    for (int i = 0; i < (int)a.length(); i++) {
        inA[(unsigned char)a[i]] = true;
    }

    // For each character in the second string, keep it if it was in the first
    for (int i = 0; i < (int)b.length(); i++) {
        unsigned char c = b[i];
        if (inA[c] && !added[c]) {
            result += b[i];
            added[c] = true;
        }
    }
    return result;
}

int main() {
    string a, b;
    cout << "Enter the first string: ";
    getline(cin, a);
    cout << "Enter the second string: ";
    getline(cin, b);

    string common = commonCharacters(a, b);

    cout << "Common characters: ";
    if (common.empty()) {
        cout << "(none)";
    } else {
        cout << common;
    }
    cout << endl;

    return 0;
}
