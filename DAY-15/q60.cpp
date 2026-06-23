#include <iostream>
using namespace std;

void moveZerosToEnd(int arr[], int n) {
    int count = 0; // Index of next non-zero element

    // Traverse the array. If element encountered is non-zero,
    // then replace the element at index 'count' with this element
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

    // Now all non-zero elements have been shifted to front and
    // 'count' is set as index of first 0.
    // Make all elements 0 from count to end.
    while (count < n) {
        arr[count++] = 0;
    }
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
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

    cout << "Original array: ";
    displayArray(arr, n);

    moveZerosToEnd(arr, n);

    cout << "Array after moving zeros to end: ";
    displayArray(arr, n);

    return 0;
}
