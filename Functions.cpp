#include <iostream>

using namespace std; 

void sayHi(string name, int age)
{
    cout << "Hello " << name << " You're " << age << endl; 

}

int main()
{
  
   sayHi("Tehreem", 16); 
   sayHi("Hareem", 19); 
   sayHi("Mahreen", 17); 

    return 0;
}