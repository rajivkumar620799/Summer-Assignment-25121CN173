#include <iostream>
using namespace std;

int main(){
    cout << "Printing Repeated Number Half Pyramid Triangle" << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}