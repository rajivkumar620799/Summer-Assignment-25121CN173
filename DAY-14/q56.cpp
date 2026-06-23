#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findDuplicates(int arr[], int n) {
    bool hasDuplicates = false;
    
    sort(arr, arr + n);

    cout << "Duplicate elements: ";
    for (int i = 0; i < n - 1; i++) {
        // If current element is same as next, it's a duplicate
        if (arr[i] == arr[i + 1]) {
            cout << arr[i] << " ";
            hasDuplicates = true;
            // Skip all subsequent occurrences of the same duplicate
            while (i < n - 1 && arr[i] == arr[i+1]) {
                i++;
            }
        }
    }

    if (!hasDuplicates) {
        cout << "None";
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

    findDuplicates(arr, n);

    return 0;
}
