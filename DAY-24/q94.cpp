#include <iostream>
#include <string>
using namespace std;

// Compress a string using counts of repeated consecutive characters.
// Example: "aaabbc" -> "a3b2c1"
string compressString(string str) {
    string result = "";
    int n = str.length();
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i + 1 < n && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        result += str[i];
        result += to_string(count);
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string compressed = compressString(str);

    cout << "Compressed string: " << compressed << endl;

    // Only use the compressed version if it is actually shorter
    if (compressed.length() < str.length()) {
        cout << "Compression is useful here." << endl;
    } else {
        cout << "Compression does not reduce the size here." << endl;
    }

    return 0;
}
