#include <iostream>
using namespace std;

// Merge two already sorted arrays into a single sorted array
int mergeSorted(int a[], int n1, int b[], int n2, int result[]) {
    int i = 0, j = 0, k = 0;

    // Pick the smaller front element from the two arrays each time
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            result[k++] = a[i++];
        } else {
            result[k++] = b[j++];
        }
    }

    // Copy any remaining elements
    while (i < n1) result[k++] = a[i++];
    while (j < n2) result[k++] = b[j++];

    return k;
}

int main() {
    int n1, n2;

    cout << "Enter the size of the first sorted array: ";
    cin >> n1;
    int a[100];
    cout << "Enter " << n1 << " elements in sorted order:" << endl;
    for (int i = 0; i < n1; i++) cin >> a[i];

    cout << "Enter the size of the second sorted array: ";
    cin >> n2;
    int b[100];
    cout << "Enter " << n2 << " elements in sorted order:" << endl;
    for (int i = 0; i < n2; i++) cin >> b[i];

    int result[200];
    int size = mergeSorted(a, n1, b, n2, result);

    cout << "Merged sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
