#include <iostream>
using namespace std;

int main (){
    int SecretNum = 5;
    int Guess;

    while (SecretNum != Guess){
        cout << "Enter your guess number: " << endl;
        cin >> Guess;
        cout << "You're wrong, please try again" << endl;
    }

    cout << "Congrats! you're right" << endl;

    return 0;
}