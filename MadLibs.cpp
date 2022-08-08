#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string Colour, PluralNoun, Celebrity;
     
     cout << "Enter a Colour: ";
     getline (cin, Colour);
     cout << "Enter a Plural Noun: ";
     getline (cin, PluralNoun);
     cout << "Enter a Celebrity: ";
     getline (cin, Celebrity);
     

    cout << "Roses are " << Colour << endl;
    cout << PluralNoun << " are blue" << endl;
    cout << "I hate " << Celebrity << endl;

    cout << "*Please don't kill me*" << endl;

    return 0;
}