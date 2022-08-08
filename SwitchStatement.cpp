#include <iostream>
using namespace std; 

string GetDayOfWeek (int DayNum)
{
    string DayName;
    switch (DayNum){
    case 0:
        DayName = "Sunday";
        break;
    case 1:
        DayName = "Monday";
        break;
    case 2:
        DayName = "Tuesday";
        break;        
    case 3:
        DayName = "Wednesday";
        break;
    case 4:
        DayName = "Thursday";
        break;
    case 5:
        DayName = "Friday";
        break;
    case 6:
        DayName = "Saturday";
        break;
    default:
        DayName = "Invalid Day Number";                

    }
    return DayName; 
}

int main()
{
    cout << GetDayOfWeek (3) << endl; 
    return 0;
}

// also merge this comment as well.