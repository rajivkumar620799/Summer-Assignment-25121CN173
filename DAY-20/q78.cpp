#include <iostream>
using namespace std;

// A matrix is symmetric if it equals its own transpose (a[i][j] == a[j][i])
bool isSymmetric(int a[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                return false;
            }
        }
    }
    return true;
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

    if (isSymmetric(a, n)) {
        cout << "The matrix is symmetric." << endl;
    } else {
        cout << "The matrix is NOT symmetric." << endl;
    }

    return 0;
}
