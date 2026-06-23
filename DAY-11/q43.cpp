#include <iostream>
using namespace std;

bool isPrime(int a) {
    if (a <= 1) return false;
    for (int i = 2; i <= a/2; i++) {
        if (a % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}