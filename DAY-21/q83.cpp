#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Count vowels and consonants in a string
void countVowelsConsonants(string str, int &vowels, int &consonants) {
    vowels = 0;
    consonants = 0;
    for (int i = 0; i < (int)str.length(); i++) {
        char c = tolower(str[i]);
        if (c >= 'a' && c <= 'z') {  // consider only alphabets
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowels, consonants;
    countVowelsConsonants(str, vowels, consonants);

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}
