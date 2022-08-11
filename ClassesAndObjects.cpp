#include <iostream>
using namespace std;

class Animals {
    public:
        string name;
        string breed; 
        int age;   
};

int main ()
{
    Animals dog;
    dog.name = "Charlie";
    dog.breed = "German shepherd";
    dog.age = 5; 

    cout << "Name: " << dog.name << endl;


    return 0;
}