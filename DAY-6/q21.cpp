#include <iostream>
using namespace std;

int main(){
    int i = 0, num, temp, bits[32], rem;
    cout << "Enter a decimal number: ";
    cin >> num;

    temp = num;
    while (temp != 0) {
        rem = temp % 2;
        bits[i] = rem;
        temp /= 2;
        i++;
    } 

    cout << "The Binary of " << num << " is ";

    for (i = i-1; i >= 0; i--) {
        cout << bits[i];
    }

    return 0;
}