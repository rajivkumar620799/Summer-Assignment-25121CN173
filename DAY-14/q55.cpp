#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int size) {
    if (size < 2) return INT_MIN;

    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "Array size must be at least 2." << endl;
        return 0;
    }

    int arr[100];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findSecondLargest(arr, n);

    if (result == INT_MIN) {
        cout << "No distinct second largest element exists." << endl;
    } else {
        cout << "The second largest element is: " << result << endl;
    }

    return 0;
}
