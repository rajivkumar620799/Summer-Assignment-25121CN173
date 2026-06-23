#include <iostream>
using namespace std;

bool isPrime(int num) {
    int i;
    if (num <= 1) {
        return false;
    }

    for (i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main(){
    int range, i;
    cout << "Enter the range upto you want to find prime numbers: ";
    cin >> range;

    for(i = 1; i <= range; i++) {
        if (isPrime(i)) {
            cout << i << " is a prime number." << endl;
        }
    }

    return 0;
}