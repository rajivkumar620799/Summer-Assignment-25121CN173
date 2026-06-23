#include <iostream>
using namespace std;

int nthFibonacciElement(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return nthFibonacciElement(n-1) + nthFibonacciElement(n-2);
}

int main(){
    int n;
    cout << "Enter a number to find the fibonacci series element at that position: ";
    cin >> n;
    cout << "The element at positio " << n << " is " << nthFibonacciElement(n);

    return 0;
}