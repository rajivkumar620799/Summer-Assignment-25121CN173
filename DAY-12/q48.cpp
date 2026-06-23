#include <iostream>
using namespace std;

bool isPerfect(int num) {
    if (num <= 1) return false;
    int sum = 1; // 1 is always a divisor
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            if (i * i != num)
                sum = sum + i + num / i;
            else
                sum = sum + i;
        }
    }
    return sum == num;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfect(num)) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }
    return 0;
}