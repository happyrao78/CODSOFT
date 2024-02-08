#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number between 1 and 100
    int unique = rand() % 100 + 1;
    
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game made by Happy Yadav\n";
    cout << "Try to guess the secret number between 1 and 100 and win the game\n";

    do {
        cout << "Enter your guessed number: ";
        cin >> guess;

        // Check if the guess is too high, too low, or correct
        if (guess > unique) {
            cout << "Too high! Try again.\n";
        } else if (guess < unique) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number in " << attempts + 1 << " attempts.\n";
        }

        attempts++;

    } while (guess != unique);

    return 0;
}
