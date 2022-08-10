#include <iostream>
using namespace std;

int main(){
    int age = 18;
    double GPA = 3.1;
    string name = "Tehreem";

    cout << "Age: " << &age << endl;
    cout << "GPA: " <<  &GPA << endl;
    cout << "Name: " <<&name << endl;

    return 0; 
}