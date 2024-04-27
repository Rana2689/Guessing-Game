#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int attempts = 0;
    int userGuess;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "Try to guess the secret number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < secretNumber) {
            cout << "Too low. Try again." << endl;
        } else if (userGuess > secretNumber) {
            cout << "Too high. Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the secret number in " << attempts << " attempts!" << endl;
        }
    } while (userGuess != secretNumber);

    return 0;
}
