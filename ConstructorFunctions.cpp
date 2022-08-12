#include <iostream>
using namespace std;

class Animals {
    public:
        string name;
        string breed;
        int age;
        Animals (string aName, string aBreed, int aAge){
            name = aName;
            breed = aBreed;
            age = aAge;
            
        }
    
};

int main ()
{
    Animals dog1("Oscar", "Golden Retriever", 9);
    Animals dog2("Charlie", "Golden Shepherd", 7);
    
    cout << dog1.name << endl;
    return 0;

}