#include <iostream>
using namespace std;

int main (){
    int NumberGrid[4][2] = {
        {4, 0},
        {8, 9},
        {6, 4},
        {1, 0};
    };
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 2; j++){
            cout << NumberGrid[i][j];
        }
        cout << endl;
    }
    return 0;
    
}