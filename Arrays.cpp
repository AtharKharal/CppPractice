#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int RandomNums [30] =  {4, 32, 54, 45, 66, 77};

    RandomNums[10]= 99;

    cout << RandomNums[10] << endl;

    return 0;
}