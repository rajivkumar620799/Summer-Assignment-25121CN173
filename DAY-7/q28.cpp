#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {
    if (n == 0) {
        return rev;
    }
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main(){
    int n;
    cout << "Enter a number whose reverse you want to find out: ";
    cin >> n;

    cout << "Reverse of " << n << " is " << reverseNumber(n);
    return 0;
}