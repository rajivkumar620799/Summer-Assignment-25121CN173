#include <iostream>
#include <string>
using namespace std;

// Count the number of words in a sentence (words separated by spaces)
int countWords(string str) {
    int count = 0;
    bool inWord = false;
    for (int i = 0; i < (int)str.length(); i++) {
        if (str[i] != ' ' && str[i] != '\t') {
            // Start of a new word
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    cout << "Number of words: " << countWords(str) << endl;

    return 0;
}
