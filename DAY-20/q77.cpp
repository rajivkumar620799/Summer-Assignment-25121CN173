#include <iostream>
using namespace std;

// Multiply two matrices: A is r1 x c1, B is c1 x c2, result is r1 x c2
void multiplyMatrices(int a[][10], int b[][10], int result[][10], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and columns of the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of the second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible (columns of first must equal rows of second)." << endl;
        return 0;
    }
    if (r1 <= 0 || c1 <= 0 || c2 <= 0 || r1 > 10 || c1 > 10 || c2 > 10) {
        cout << "Invalid dimensions." << endl;
        return 0;
    }

    int a[10][10], b[10][10], result[10][10];

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> a[i][j];

    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];

    multiplyMatrices(a, b, result, r1, c1, c2);

    cout << "Product of the matrices:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
