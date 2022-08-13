#include <iostream>
using namespace std; 

class chef{
    public: 
    void makechicken(){
        cout << "The chef makes yummy chiken" << endl;
    }
    void makesalad (){
        cout << "The check makes salad" << endl;
    }
    void makespecialdish(){
        cout << "The chef makes yummy sea food" << endl;
    }
};

class ItalianChef : public chef {
    public: 
    void makepasta(){
        cout << "The chef makes pasta" << endl;
    }

};

int main ()
{
    chef Chef;
    Chef.makechicken();

    ItalianChef ItalianChef; 
    ItalianChef.makechicken();

    return 0;
}