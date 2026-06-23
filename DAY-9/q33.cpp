#include <iostream>
using namespace std;

int main(){
    cout << "Printing reverse star pattern" << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j >= i; j--) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}