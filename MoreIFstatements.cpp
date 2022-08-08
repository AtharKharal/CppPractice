#include <iostream>

using namespace std;

int getmax (int num1, int num2)
{
    int result;

if(num1 == num2)
{
result = num2;
} 
else
{
    result = num1;
}
  return result;
}

int main ()
{
    cout << getmax(2, 2) << endl;
    return 0;
}
   