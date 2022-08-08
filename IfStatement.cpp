#include <iostream>

using namespace std;

int main()
{
    bool isFemale = false;
    bool isTall = true;
    if (isFemale && isTall)
    {
        cout << "You are a tall Female" << endl; 
    }
    else if (isFemale && !isTall)
    {
    cout << "You're a short Female" << endl; 
    }
    else if(!isFemale && isTall)
    {
        cout << "You're tall but not a female" <<endl;
    }
    else
    {
        cout << "You are a not a Tall Female" << endl;
    }
}