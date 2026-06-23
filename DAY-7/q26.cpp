#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 1 || n == 0) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int i, n;
    cout << "Enter a number upto which you want to find the fibonacci series: ";
    cin >> n;
    for (i = 0; i <= n; i++)  {
        cout << fibonacci(i) << " ";
    }
    return 0;
}