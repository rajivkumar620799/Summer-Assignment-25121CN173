#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    // n is the size of the array, which contains n elements.
    // However, the elements are from 1 to n+1.
    int totalElements = n + 1;
    long long expectedSum = (long long)totalElements * (totalElements + 1) / 2;
    long long actualSum = 0;
    
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }
    
    return (int)(expectedSum - actualSum);
}

int main() {
    int n;
    cout << "Enter the number of elements present in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size." << endl;
        return 0;
    }

    int arr[100];
    cout << "Enter " << n << " elements (ranging from 1 to " << n + 1 << "):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int missing = findMissingNumber(arr, n);
    cout << "The missing number is: " << missing << endl;

    return 0;
}
