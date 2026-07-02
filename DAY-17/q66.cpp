#include <iostream>
#include <algorithm>
using namespace std;

// Union of two arrays: all distinct elements present in either array
int unionArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int temp[200];
    int k = 0;

    // Put all elements of both arrays together
    for (int i = 0; i < n1; i++) temp[k++] = arr1[i];
    for (int i = 0; i < n2; i++) temp[k++] = arr2[i];

    // Sort so duplicates become adjacent
    sort(temp, temp + k);

    // Keep only the distinct elements
    int j = 0;
    for (int i = 0; i < k; i++) {
        if (i == 0 || temp[i] != temp[i - 1]) {
            result[j++] = temp[i];
        }
    }
    return j; // size of union
}

int main() {
    int n1, n2;

    cout << "Enter the number of elements in the first array: ";
    cin >> n1;
    int arr1[100];
    cout << "Enter " << n1 << " elements:" << endl;
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> n2;
    int arr2[100];
    cout << "Enter " << n2 << " elements:" << endl;
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int result[200];
    int size = unionArrays(arr1, n1, arr2, n2, result);

    cout << "Union of the two arrays: ";
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
