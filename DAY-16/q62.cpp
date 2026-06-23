#include <iostream>
#include <map>
#include <vector>
using namespace std;

void findMaxFrequency(int arr[], int n) {
    if (n == 0) return;

    map<int, int> freqMap;
    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }

    int maxFreq = 0;
    for (auto const& [val, freq] : freqMap) {
        if (freq > maxFreq) {
            maxFreq = freq;
        }
    }

    cout << "Maximum frequency is " << maxFreq << " for element(s): ";
    for (auto const& [val, freq] : freqMap) {
        if (freq == maxFreq) {
            cout << val << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size." << endl;
        return 0;
    }

    int arr[100];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findMaxFrequency(arr, n);

    return 0;
}
