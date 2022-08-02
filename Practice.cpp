#include <iostream>
#include <cmath>

using namespace std;
 
int main()
{
    string Color, PluralNoun, Celebrity;

    cout << "Enter a color: ";
    getline (cin, Color);
    cout << "Enter a plural noun: ";
    getline (cin, PluralNoun);
    cout << "Enter the name of a Celebrity: ";
    getline (cin, Celebrity);
    
    cout << "Roses are" << Color << endl;
    cout <<  PluralNoun << "are blue" << endl;
    cout << "I hate" << Celebrity << endl;
    
    return 0;
}