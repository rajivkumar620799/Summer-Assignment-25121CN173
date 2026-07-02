#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// A simple number guessing game.
// The computer picks a random number between 1 and 100 and the user tries to guess it.
int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;  // random number from 1 to 100

    int guess;
    int attempts = 0;

    cout << "=== Number Guessing Game ===" << endl;
    cout << "I have picked a number between 1 and 100. Try to guess it!" << endl;

    while (true) {
        cout << "Enter your guess: ";
        if (!(cin >> guess)) {
            cout << "\nNo more input. Goodbye!" << endl;
            break;
        }
        attempts++;

        if (guess < secret) {
            cout << "Too low! Try a higher number." << endl;
        } else if (guess > secret) {
            cout << "Too high! Try a lower number." << endl;
        } else {
            cout << "Correct! You guessed it in " << attempts << " attempt(s)." << endl;
            break;
        }
    }

    return 0;
}
