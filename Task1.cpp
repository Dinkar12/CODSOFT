#include <iostream>
#include <ctime>   // For time()
#include <cstdlib> // For rand() and srand()
using namespace std;

// Function to generate a random number between 'min' and 'max'
int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Function to get user's guess
int getUserGuess() {
    int guess;
    cout << "Enter your guess: ";
    cin >> guess;
    return guess;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int lowerBound = 1;
    int upperBound = 100;
    int secretNumber = generateRandomNumber(lowerBound, upperBound);

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between " << lowerBound << " and " << upperBound << ". Can you guess it?" << endl;

    int guess, attempts = 0;
    do {
        guess = getUserGuess();
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number " << secretNumber << " in " << attempts << " attempts." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
