#include <iostream>
using namespace std;

int pow(int base, int power) {
    int i, result = 1;
    for (i = 1; i <= power; i++) {
        result *= base;
    }
    return result;
}

int main(){
    int base, power;
    cout << "Enter base and power: ";
    cin >> base >> power;
    cout << pow(base, power) << endl;
    return 0;
}