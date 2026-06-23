#include <iostream>
using namespace std;

int main(){
    cout << "Printing Half Pyramid Pattern" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}