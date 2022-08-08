#include <iostream>

using namespace std;

int cube(double num)
{
   double result = num * num * num;
    return result; 
}

int main ()
{
    double answer = cube (5.5);
    cout << answer << endl;

    return 0;
}