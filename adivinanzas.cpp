#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int attempts = 0;
    string userGuess;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "Try to guess the secret number between 1 and 100  'Be careful not to put a letter instead of a number because the game loops and could slow down your computer'." << endl;

    do {
        cout << "Enter your guess: ";
        getline(cin, userGuess);

        try {
            stoi(usetGuess);
        } catch(invalid_argiment&){
            cout << "You didn't introduced a number." << endl;
            continue;
        } 

        attempts++;

        if (stoi(userGuess) < secretNumber) {
            cout << "Too low. Try again." << endl;
        } else if (stoi(userGuess) > secretNumber) {
            cout << "Too high. Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the secret number in " << attempts << " attempts!" << endl;
        }
    } while (stoi(userGuess) != secretNumber);

    return 0;
}
