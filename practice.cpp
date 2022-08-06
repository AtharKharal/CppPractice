#include <iostream>
using namespace std;

int main ()
{
    int num1, num2;
    char opr; 

    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter your operator: ";
    cin >> opr;
    cout << "Enter your second number: ";
    cin >> num2;
    int result=0;

    if(opr == '+'){
        result = num1 + num2;
        cout << result << endl;   
    } 
    else if(opr == '-'){ 
        result = num1 - num2;
        cout << result << endl;   
    } 
    else if(opr == '/'){
        result = num1 / num2;
        cout << result << endl;   
    } 
    else if(opr = '*'){
        result = num1 * num2;
        cout << result << endl;   
    } 
    else{
        cout << "Invalid Operator" << endl;
    } 
}

