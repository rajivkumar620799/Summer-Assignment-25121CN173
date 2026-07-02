#include <iostream>
#include <string>
using namespace std;

// Find the longest word in a sentence (words separated by spaces)
string longestWord(string sentence) {
    string longest = "";
    string current = "";

    // Add a trailing space so the last word also gets processed
    sentence += " ";
    for (int i = 0; i < (int)sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (current.length() > longest.length()) {
                longest = current;
            }
            current = "";
        } else {
            current += sentence[i];
        }
    }
    return longest;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string result = longestWord(sentence);

    cout << "Longest word: " << result << " (length " << result.length() << ")" << endl;

    return 0;
}
