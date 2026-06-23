#include <iostream>
using namespace std;

int main(){
    int num, temp, digit, product = 1;
    cout << "Enter a number whose product of digits you want to find: ";
    cin >> num;

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        product *= digit;
        temp /= 10;
    }

    cout << "Product of digits of " << num << " is " << product;
    return 0;
}