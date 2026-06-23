#include <iostream>
using namespace std;

int main(){

    int n, i = 0, first = 0, second = 1, next;

    cout << "Enter the number upto which you want to generate fibonacci series: ";
    cin >> n;

    while (i < n) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
        i++;
    }
    
    return 0;
}