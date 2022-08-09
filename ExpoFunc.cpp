#include <iostream> 
using namespace std;

int power (int BaseNum, int PowNum){
    int result = 1; 
    for (int i = 0; i < PowNum; i++){
        result = result * BaseNum;
    }
    return result;
}
int main ()
{
    cout << power(2, 7) << endl; 

    return 0; 
}