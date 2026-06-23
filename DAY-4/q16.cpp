#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int temp, digits = 0, sum = 0, digit;
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
        return true;
    } else {
        return false;
    }
}

int main(){
    int range, i = 1;

    cout << "Enter the range upto which you want to check for armstrong numbers: " ;
    cin >> range;

    while (i <= range) {
        if (isArmstrong(i)) {
            cout << i << " is a Armstrong number." << endl;
        }
        i++;
    }

    return 0;
}