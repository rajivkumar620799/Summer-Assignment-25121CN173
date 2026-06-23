#include <iostream>
using namespace std;

int main(){
    int num, temp, reverse = 0, digit;
    cout << "Enter a number whom you want to reverse: ";
    cin >> num;

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    cout << "Reverse of Number " << num << " is " << reverse;
    return 0;
}