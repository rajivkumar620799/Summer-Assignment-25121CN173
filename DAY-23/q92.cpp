#include <iostream>
#include <string>
using namespace std;

// Find the character that occurs the maximum number of times in the string
char maxOccurringChar(string str, int &maxCount) {
    int count[256] = { 0 };
    for (int i = 0; i < (int)str.length(); i++) {
        count[(unsigned char)str[i]]++;
    }

    char maxChar = str[0];
    maxCount = 0;
    for (int i = 0; i < (int)str.length(); i++) {
        if (count[(unsigned char)str[i]] > maxCount) {
            maxCount = count[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }
    return maxChar;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (str.empty()) {
        cout << "Empty string." << endl;
        return 0;
    }

    int maxCount;
    char ch = maxOccurringChar(str, maxCount);

    cout << "Maximum occurring character: '" << ch << "' (" << maxCount << " times)" << endl;

    return 0;
}
