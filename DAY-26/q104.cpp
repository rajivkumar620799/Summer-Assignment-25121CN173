#include <iostream>
#include <string>
using namespace std;

// A small multiple-choice quiz application that keeps a score.
int main() {
    int score = 0;
    char answer;

    cout << "=== Quiz Application ===" << endl;
    cout << "Answer the following questions by entering a, b, c or d.\n" << endl;

    // Question 1
    cout << "Q1. Which language are these programs written in?" << endl;
    cout << "a) Python  b) C++  c) Java  d) Ruby" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'b') { cout << "Correct!\n"; score++; }
    else { cout << "Wrong! Correct answer: b\n"; }

    // Question 2
    cout << "\nQ2. What is the size of an int (typically) in bytes?" << endl;
    cout << "a) 2  b) 4  c) 8  d) 16" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'b') { cout << "Correct!\n"; score++; }
    else { cout << "Wrong! Correct answer: b\n"; }

    // Question 3
    cout << "\nQ3. Which symbol is used for output in C++?" << endl;
    cout << "a) >>  b) <<  c) ->  d) ::" << endl;
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 'b') { cout << "Correct!\n"; score++; }
    else { cout << "Wrong! Correct answer: b\n"; }

    cout << "\nQuiz over! Your score is " << score << " out of 3." << endl;

    return 0;
}
