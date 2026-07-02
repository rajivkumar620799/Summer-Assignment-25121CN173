#include <iostream>
#include <string>
using namespace std;

// Sort words by their length (shortest first). Equal lengths keep their order.
void sortByLength(string words[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (words[j].length() > words[j + 1].length()) {
                string temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of words: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid count." << endl;
        return 0;
    }

    string words[100];
    cout << "Enter " << n << " words:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    sortByLength(words, n);

    cout << "Words sorted by length:" << endl;
    for (int i = 0; i < n; i++) {
        cout << words[i] << " (" << words[i].length() << ")" << endl;
    }

    return 0;
}
