#include <iostream>
using namespace std;

void rotateLeft(int arr[], int n, int d) {
    // To handle if d >= n
    d = d % n;
    
    // Create a temporary array to store the first 'd' elements
    int temp[100];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    
    // Shift the remaining elements to the left
    for (int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }
    
    // Put back the 'd' elements from temp at the end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
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
    
    rotateLeft(arr, n, d);
    
    cout << "Array after left rotation: ";
    displayArray(arr, n);
    
    return 0;
}
