#include <iostream>
using namespace std;

class movie {
    private: 
    string Rating;
    public:
        string Title;
        string Director;
        movie (string aTitle, string aDirector, string aRating){
            Title = aTitle;
            Director = aDirector;
            setRating (aRating);
        }
        
        void setRating(string aRating){
        if (aRating == "G" || aRating == "PG-13" || aRating == "R" || aRating == "PG" || aRating == "NR"){
         Rating = aRating;
        } else {
            Rating  = "NR"; 
        }
        }

    string getRating (){
        return Rating;
    }
};

int main(){
    movie avengers ("The Avengers", "Joe Russo", "PG-13"); 


    cout << avengers.getRating() << endl; 

    return 0;
};