#include <iostream>
using namespace std;

int main(){
    int i, num;
    cout << "Enter a number to check its factors: ";
    cin >> num;

    for (i = 1; i <= num/2; i++)     {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << num;
    return 0;
}