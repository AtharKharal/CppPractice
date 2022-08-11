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
    dog.breed = "German hepherd";
    dog.age = 5; 

    cout << "Name: " << dog.name << endl;
    cout << "Breed: " << dog.breed << endl;
    cout << "Age: " << dog.age << endl;


    return 0;
}