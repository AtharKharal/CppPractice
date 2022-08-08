#include <iostream>
using namespace std;

int main ()
{
    int num1, num2;
    char opr;

    cout << "Enter the first number: " << endl;
    cin >> num1; 
    cout << "Enter an operator: " << endl;
    cin >> opr;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    int result; 

    if (opr == '+'){
        result = num1 + num2;
    } else if (opr == '-'){
        result = num1 - num2;
    } else if (opr == '/'){
        result == num1 / num2;
    } else if (opr == '*'){
        result = num1 * num2;
    } else {
        cout << "Invalid operator" << endl;
    }
    cout << result << endl;
    

}

// These are comments from Baba, so u better merge them!!!