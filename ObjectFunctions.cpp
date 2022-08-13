#include <iostream>
using namespace std;

class student {
    public: 
    string name;
    string major;
    double gpa; 
    
    student (string aName, string aMajor, double aGPA)
    {
        name = aName;
        major = aMajor;
        gpa = aGPA;
    }
    
    bool hasHonors(){
        if (gpa >= 3.5){
            return true;
        }
        return false;
    }
};

int main ()
{
    student student1 ("Tehreem", "Accounting and Finance", 3.7);
    student student2 ("Mahreen", "Data Science", 3.1);

    cout << student2.hasHonors();
    
    return 0;
}