#include <iostream>
using namespace std;

int main(){
    cout << "Printing Hollow Rectangle Star Pattern" << endl; 
    int rows = 6, columns = 20;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            if (i == 1 || i == rows || j == 1 || j == columns) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}