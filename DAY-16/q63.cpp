#include <iostream>
#include <unordered_set>
using namespace std;

void findPair(int arr[], int n, int targetSum) {
    unordered_set<int> seen;
    bool found = false;

    for (int i = 0; i < n; i++) {
        int complement = targetSum - arr[i];
        if (seen.find(complement) != seen.end()) {
            cout << "Pair found: (" << complement << ", " << arr[i] << ")" << endl;
            found = true;
        }
        seen.insert(arr[i]);
    }

    if (!found) {
        cout << "No pair found with the given sum." << endl;
    }
}

int main() {
    int n, targetSum;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size." << endl;
        return 0;
    }

    int arr[100];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> targetSum;

    findPair(arr, n, targetSum);

    return 0;
}
