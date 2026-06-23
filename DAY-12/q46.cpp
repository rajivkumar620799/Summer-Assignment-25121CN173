#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int n = 0;

    // Find the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp != 0) {
        int remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    return (sum == originalNum);
}

int main(){
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}