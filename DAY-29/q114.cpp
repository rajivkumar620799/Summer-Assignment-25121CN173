#include <iostream>
#include <algorithm>
using namespace std;

// Menu-driven array operations system: insert, display, sum, max/min and sort.
int main() {
    int arr[100];
    int n = 0;
    int choice;

    cout << "=== Menu-Driven Array Operations ===" << endl;

    while (true) {
        cout << "\n1. Input Array" << endl;
        cout << "2. Display Array" << endl;
        cout << "3. Sum of Elements" << endl;
        cout << "4. Maximum and Minimum" << endl;
        cout << "5. Sort Array" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";

        if (!(cin >> choice)) break;

        if (choice == 1) {
            cout << "Enter number of elements: ";
            cin >> n;
            if (n <= 0 || n > 100) { cout << "Invalid size." << endl; n = 0; continue; }
            cout << "Enter " << n << " elements: ";
            for (int i = 0; i < n; i++) cin >> arr[i];
            cout << "Array stored." << endl;
        } else if (choice == 2) {
            if (n == 0) { cout << "Array is empty." << endl; continue; }
            cout << "Array: ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
        } else if (choice == 3) {
            if (n == 0) { cout << "Array is empty." << endl; continue; }
            int sum = 0;
            for (int i = 0; i < n; i++) sum += arr[i];
            cout << "Sum = " << sum << endl;
        } else if (choice == 4) {
            if (n == 0) { cout << "Array is empty." << endl; continue; }
            int mx = arr[0], mn = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] > mx) mx = arr[i];
                if (arr[i] < mn) mn = arr[i];
            }
            cout << "Maximum = " << mx << ", Minimum = " << mn << endl;
        } else if (choice == 5) {
            if (n == 0) { cout << "Array is empty." << endl; continue; }
            sort(arr, arr + n);
            cout << "Sorted array: ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
        } else if (choice == 6) {
            cout << "Exiting. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
