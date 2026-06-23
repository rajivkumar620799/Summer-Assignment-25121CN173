#include <iostream>
using namespace std;

int factorial(int num) {
    if (num <= 1) {
        return 1;
    }

    return num * factorial(num-1);
}

bool isStrongNumber(int num) {
    int sum = 0, digit, temp;

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (num == sum) {
        return true;
    } else {
        return false;
    }
}

int main(){
    int num;
    cout << "Enter a number to check for strong number: " ;
    cin >> num;

    if (isStrongNumber(num)) {
        cout << num << " is a strong number.";
    } else {
        cout << num << " is not a strong number.";
    }

    return 0;
}