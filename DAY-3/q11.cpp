#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a == 0 || b == 0) return max(a, b);

    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }

    return result;
}

int main(){
    int num1, num2;
    cout << "Enter number one: ";
    cin >> num1;

    cout << "Enter number two: ";
    cin >> num2;

    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2);
    return 0;
}