#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int canbenumber(string num) {
    try {
        return stoi(num);
    } catch(invalid_argument&) {
        return 0;
    }
}

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int attempts = 0;
    string userGuess;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "Try to guess the secret number between 1 and 100." << endl;

    while (canbenumber(userGuess) != secretNumber) {
        cout << "Enter your guess: ";
        getline(cin, userGuess);

        try {
            stoi(userGuess);

            attempts++;

            if (stoi(userGuess) < secretNumber) {
                cout << "Too low. Try again." << endl;
            } else if (stoi(userGuess) > secretNumber) {
                cout << "Too high. Try again." << endl;
            } else {
                cout << "Congratulations! You've guessed the secret number in " << attempts << " attempts!" << endl;
            }
        } catch(invalid_argument&){
            cout << "You didn't introduced a number." << endl;
        } 
    }

    return 0;
}
