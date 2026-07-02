#include <iostream>
using namespace std;

// Print the sum of each column of the matrix
void columnWiseSum(int a[][10], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += a[i][j];
        }
        cout << "Sum of column " << j + 1 << " = " << sum << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    if (rows <= 0 || cols <= 0 || rows > 10 || cols > 10) {
        cout << "Invalid dimensions." << endl;
        return 0;
    }

    int a[10][10];
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> a[i][j];

    cout << "Column-wise sums:" << endl;
    columnWiseSum(a, rows, cols);

    return 0;
}
