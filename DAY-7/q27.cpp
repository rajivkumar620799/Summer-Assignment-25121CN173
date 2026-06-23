#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumOfDigits(n/10);
}

int main(){
    int n;
    cout << "Enter a number whose sum of digits you want to find out: " ;
    cin >> n;

    cout << "Sum of digits of " << n << " is " << sumOfDigits(n);
    return 0;
}