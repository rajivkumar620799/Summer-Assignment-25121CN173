#include <iostream>
#include <string>
using namespace std;

// Two strings are anagrams if they contain the same characters with the same counts
bool areAnagrams(string a, string b) {
    if (a.length() != b.length()) {
        return false;
    }

    int count[256] = { 0 };
    for (int i = 0; i < (int)a.length(); i++) {
        count[(unsigned char)a[i]]++;  // add for first string
        count[(unsigned char)b[i]]--;  // remove for second string
    }

    // If every count is zero, the strings are anagrams
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string a, b;
    cout << "Enter the first string: ";
    getline(cin, a);
    cout << "Enter the second string: ";
    getline(cin, b);

    if (areAnagrams(a, b)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are NOT anagrams." << endl;
    }

    return 0;
}
