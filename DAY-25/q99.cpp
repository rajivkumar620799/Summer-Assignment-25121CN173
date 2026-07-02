#include <iostream>
#include <string>
using namespace std;

// Sort an array of names in alphabetical order using bubble sort
void sortNames(string names[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            // The > operator on strings compares them lexicographically
            if (names[j] > names[j + 1]) {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of names: ";
    cin >> n;
    cin.ignore();  // discard the leftover newline before reading names

    if (n <= 0) {
        cout << "Invalid count." << endl;
        return 0;
    }

    string names[100];
    cout << "Enter " << n << " names:" << endl;
    for (int i = 0; i < n; i++) {
        getline(cin, names[i]);
    }

    sortNames(names, n);

    cout << "Names in alphabetical order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
