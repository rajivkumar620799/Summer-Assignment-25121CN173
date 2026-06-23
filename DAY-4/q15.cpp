#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, temp, digits = 0, sum = 0, digit;
    cout << "Enter a number to check whether it is a Armstrong number or not: " ;
    cin >> num;

    temp = num;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // cout << digits;

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (num == sum) {
        cout << num << " is a Armstrong number.";
    } else {
        cout << num << " is not a Armstrong number.";
    }

    return 0;
}