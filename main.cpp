#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void number_guessing_game() {
    cout << "Welcome to the Number Guessing Game! Developed by #SyedAmir" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    // Random number generation
    srand(time(0));
    int number_to_guess = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        // Check the guess
        if (guess < number_to_guess) {
            cout << "Too low! Try again." << endl;
        } else if (guess > number_to_guess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number " << number_to_guess << " in " << attempts << " attempts." << endl;
            break;
        }
    }
}

int main() {
    number_guessing_game();
    return 0;
}

