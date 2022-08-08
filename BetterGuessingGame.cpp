#include <iostream>
using namespace std;

int main (){
    int SecretNum = 7;
    int Guess;
    int GuessCount = 0;
    int GuessLimit = 3;
    bool OutOfGuesses = false;

    while (SecretNum != Guess && !OutOfGuesses){
        if (GuessCount < GuessLimit){
            cout << "Enter Guess: " << endl;
            cin >> Guess;
            GuessCount++;
        } else {
            OutOfGuesses = true;
        }
    }
    if (OutOfGuesses){
        cout << "You Lose!";
    }
    else {
        cout << "You Win!";
    }
}