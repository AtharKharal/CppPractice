#include <iostream>

using namespace std;

int main ()
{
    bool isMale = false;
    bool isStupid = true;

if (isMale && isStupid)
{
    cout << "You're a stupid Male" << endl;
}
else if (isMale && !isStupid)
{
    cout << "You're a male but not as stupid as others" << endl;
}
else if (!isMale && isStupid)
{
    cout << "you're not male but stupid *surprizingly*" << endl;
}
else
{
cout << "You're not a stupid Male but since you're a male so YOU ARE STUPID" << endl;
}

return 0;

}