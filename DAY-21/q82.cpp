#include <iostream>
#include <string>
using namespace std;

// Reverse a string by swapping characters from both ends towards the middle
void reverseString(string &str) {
    int i = 0;
    int j = str.length() - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    reverseString(str);

    cout << "Reversed string: " << str << endl;

    return 0;
}
