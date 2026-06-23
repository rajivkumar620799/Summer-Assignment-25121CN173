#include <iostream>
using namespace std;

bool isPerfectNum(int num) {
    int i, sum = 0;
    for (i = 1; i <= num/2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (num == sum) {
        return true;
    }
    return false;
}

int main(){
    int num;
    cout << "Enter a number to check for perfect number: ";
    cin >> num;

    if (isPerfectNum(num)) {
        cout << num << " is a perfect number.";
    } else {
        cout << num << " is not a perfect number.";
    }
    return 0;
}