//Section 9
//Switch with enumeration

#include <iostream>

using namespace std;

int main(){

    enum Direction {
        left, right, up, down
    };

    Direction heading {right};    //the direction given here if it matches with the case then that case is executed

    switch(heading) {
        case left: 
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl;
            break;
        defalut:
            cout <<"OK" << endl;
    }

    //if the default statement is not given then the compiler generates a error asking to haldle all the enum types

    return 0;

}