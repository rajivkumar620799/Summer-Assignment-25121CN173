#include <iostream>
using namespace std;

int findFrequency(int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, target;
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

    cout << "Enter the element to find frequency for: ";
    cin >> target;

    int frequency = findFrequency(arr, n, target);
    cout << "Frequency of " << target << " is: " << frequency << endl;

    return 0;
}
