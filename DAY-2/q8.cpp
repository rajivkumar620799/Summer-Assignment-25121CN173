#include <iostream>
using namespace std;

int reverse(int num) {
    int reverse = 0, digit;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    return reverse;
}

bool isPalindrome(int num) {
    int reverseNum = reverse(num);
    if (num == reverseNum) {
        return true;
    }
    return false;
}

int main(){
    int num;
    cout << "Enter a number to check palindrome: " ;
    cin >> num;

    bool isPalin = isPalindrome(num);
    if (isPalin) {
        cout << num << " is a palindrome number.";
    } else {
        cout << num << " is not a palindrome number.";
    }
    return 0;
}