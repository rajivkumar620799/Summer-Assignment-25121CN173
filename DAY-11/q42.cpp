#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a:b;
}

int main(){
    int a, b;
    cout << "Enter first numbers: ";
    cin >> a;
    cout << "Enter second numbers: ";
    cin >> b;
    cout << "Maximum number is: " << max(a, b) << endl;
    return 0;
}