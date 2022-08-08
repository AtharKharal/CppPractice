#include <iostream>
using namespace std;

int main ()
{
    int secretNum = 9;
    int guess; 

    while (secretNum != guess)
    {
        cout << "Enter your guess number: ";
        cin >> guess;   
        cout << "This is not the secret number. Try again " << endl;
    }
    
    cout << "Congrats! You're right!" << endl;
    
    return 0;
}