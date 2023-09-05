//Section 9
//while loop

#include <iostream>

using namespace std;

int main(){

    // int num{};
    // cout << "Enter a positive integer - start the countdown :";
    // cin >> num;

    // while(num >0){
    //     cout << num << endl;
    //     --num;
    // }
    // cout <<"Blastoff!" << endl;

    // int num{};
    // cout << "Enter a positive integer to count up to: ";
    // cin >> num;

    // int i{1};
    // while (num >= i){
    //     cout << i << endl;
    //     i++;
    // }

    // int number{};

    // cout << "Enter aa integer less than 100 :";
    // cin >> number;

    // while (number >= 100){    //this loops executes when the number entered is greater than 100
    //     cout << "Enter an integer less than 100: ";
    //     cin >> number;
    // }
    // cout << "Thanks"<< endl;

    bool done {false};
    int number {0};

    while (!done){     //the loop is entered because bool is explicitely set to false 
        cout << "Enter an integer between 1 and 5 : ";
        cin >> number ;
        if (number<=1 || number >= 5)   
            cout << "Out of range, try again" << endl;
        else{
            cout << "Thanks!" << endl;
            done = true;      // here done is set to true so that it doesn't enter the while loop again
        }
    }


    return 0;
}