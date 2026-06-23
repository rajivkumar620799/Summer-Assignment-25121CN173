#include <iostream>
using namespace std;

void rotateRight(int arr[], int n, int d) {
    // To handle if d >= n
    d = d % n;
    if (d == 0) return;
    
    // Create a temporary array to store the last 'd' elements
    int temp[100];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }
    
    // Shift elements to the right
    for (int i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }
    
    // Put back the 'd' elements from temp at the beginning
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, d;
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
    
    cout << "Enter the number of rotations: ";
    cin >> d;
    
    cout << "Original array: ";
    displayArray(arr, n);
    
    rotateRight(arr, n, d);
    
    cout << "Array after right rotation: ";
    displayArray(arr, n);
    
    return 0;
}
