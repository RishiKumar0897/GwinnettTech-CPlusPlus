#include <iostream>
#include <sstream>
#include <cstdlib>

using namespace std;

int randomNum = rand() % 10 + 1;
int guesses = 0;

void guessingGame();

int main() {
    guessingGame();
}

void guessingGame() {
    int userGuess;
    string userGuessString;

    do {
        cout << "Guess the number between 1 - 10: " << endl;
        getline(cin, userGuessString);
        stringstream(userGuessString) >> userGuess;

         if (userGuess > randomNum) {
             cout << "Your guess is higher than the number. Try again." << endl;
             guesses = guesses + 1;
         }
         else if (userGuess < randomNum) {
            cout << "Your guess is lower than the number. Try again." << endl;
             guesses = guesses + 1;
         }
         else {
             guesses = guesses + 1;
             break;
         }

    } while(userGuess != randomNum);

    cout << "You have guessed the number in " << guesses << " tries!" << endl;
}

