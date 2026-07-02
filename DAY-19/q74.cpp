#include <iostream>
using namespace std;

// Subtract second matrix from the first (same dimensions)
void subtractMatrices(int a[][10], int b[][10], int result[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
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

    int a[10][10], b[10][10], result[10][10];

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> a[i][j];

    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> b[i][j];

    subtractMatrices(a, b, result, rows, cols);

    cout << "Difference of the matrices (first - second):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
