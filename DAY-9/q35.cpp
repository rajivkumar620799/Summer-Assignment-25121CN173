#include <iostream>
using namespace std;

int main(){
    cout << "Printing Repeated Character Pattern" << endl;
    for (int i = 65; i <= 69; i++) {
        for (int j = 65; j <= i; j++) {
            cout << char(i) << " ";
        }
        cout << endl;
    }
    return 0;
}