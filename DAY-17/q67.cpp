#include <iostream>
#include <algorithm>
using namespace std;

// Intersection of two arrays: distinct elements present in BOTH arrays
int intersectionArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    // Sort both arrays first
    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            // Equal: add only if not already added (avoid duplicates)
            if (k == 0 || result[k - 1] != arr1[i]) {
                result[k++] = arr1[i];
            }
            i++;
            j++;
        }
    }
    return k; // size of intersection
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

    int result[100];
    int size = intersectionArrays(arr1, n1, arr2, n2, result);

    cout << "Intersection of the two arrays: ";
    if (size == 0) {
        cout << "(no common elements)";
    }
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
