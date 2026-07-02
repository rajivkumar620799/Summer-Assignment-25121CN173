#include <iostream>
using namespace std;

// Find the sum of both diagonals of a square matrix
void diagonalSum(int a[][10], int n, int &primary, int &secondary) {
    primary = 0;
    secondary = 0;
    for (int i = 0; i < n; i++) {
        primary += a[i][i];              // top-left to bottom-right
        secondary += a[i][n - 1 - i];    // top-right to bottom-left
    }
}

int main() {
    int n;
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    if (n <= 0 || n > 10) {
        cout << "Invalid size." << endl;
        return 0;
    }

    int a[10][10];
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int primary, secondary;
    diagonalSum(a, n, primary, secondary);

    cout << "Primary diagonal sum: " << primary << endl;
    cout << "Secondary diagonal sum: " << secondary << endl;

    return 0;
}
