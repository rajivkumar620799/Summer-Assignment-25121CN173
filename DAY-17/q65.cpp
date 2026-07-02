#include <iostream>
using namespace std;

// Merge two arrays into a single array (one after another)
int mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int k = 0;
    for (int i = 0; i < n1; i++) {
        result[k++] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        result[k++] = arr2[i];
    }
    return k; // size of merged array
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
    int size = mergeArrays(arr1, n1, arr2, n2, result);

    cout << "Merged array: ";
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
