#include <iostream>
using namespace std;

class Animals {
    public:
        string name;
        string breed;
        int age;
        Animals (string name){
            cout << name << endl; 
        }
    
};

int main ()
{
    Animals dog1("Oscar");
    dog1.name = "Oscar";
    dog1.breed = "Golden Retriever";
    dog1.age = 9;

    Animals dog2("Charlie");
    dog2.name = "Charlie";
    dog2.breed = "Golden Shepherd";
    dog2.age = 7;

    return 0;

}