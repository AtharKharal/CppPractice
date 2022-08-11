#include <iostream>
using namespace std;

int main(){
    int age = 18;
    int *pAge = &age;
    double GPA = 3.1;
    double *pGPA = &GPA; 
    string name = "Tehreem";
    string *pName = &name;

    cout << pGPA << endl;
   

    return 0; 
}