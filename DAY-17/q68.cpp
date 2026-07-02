#include <iostream>
using namespace std;

// Find common elements between two arrays (kept in the order of the first array)
int findCommon(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int k = 0;
    for (int i = 0; i < n1; i++) {
        // Check whether arr1[i] is present in the second array
        bool present = false;
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                present = true;
                break;
            }
        }

        // Avoid adding the same element twice in the result
        bool alreadyAdded = false;
        for (int t = 0; t < k; t++) {
            if (result[t] == arr1[i]) {
                alreadyAdded = true;
                break;
            }
        }

        if (present && !alreadyAdded) {
            result[k++] = arr1[i];
        }
    }
    return k;
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
    int size = findCommon(arr1, n1, arr2, n2, result);

    cout << "Common elements: ";
    if (size == 0) {
        cout << "(none)";
    }
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
