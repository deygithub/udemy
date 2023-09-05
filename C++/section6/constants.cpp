//Section 6
//declaring and using constants

/*
Frank's carpet cleaning service
Charges $30 per room
Sales tax rate per room is  60%
Estimates are valid for 30.5 days

promt the user for the no. of rooms they would like cleaned and provide an estimate such as:

Estimate for the carpet cleaning service 
number of rooms: 2
price per room: $30.5 
cost: $60
tax: $3.6
=====================
total estimate: $63.6
this estimate is valid for 30 days

PSEUDOCODE: (steps on how we are going to write the code)
promt the user the enter the number of rooms
display no. of rooms
display price per room
display cost: (no. of rooms * price per room)
display tax: (no of rooms * price per rrom * tax rate)
display total estimate:(no of rooms * price per room) + (no. of rooms * price per room * tax rate)
display estimate expiration time
*/

#include <iostream>

using namespace std;
int main(){
    cout<<"Hello, Frank's carpet cleaning service" << endl;
    cout<<"\nHow many rooms would you like cleaned?";

    int number_of_rooms {0};
    cin >> number_of_rooms;

    const double price_per_room {30.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; //days
    
    cout <<"\nEstimate for the carpet cleaning service"<<endl;
    cout <<"Number of rooms:" <<number_of_rooms <<endl;
    cout <<"Price per room: $" <<price_per_room <<endl;
    cout <<"Cost: $"<< price_per_room * number_of_rooms <<endl;
    cout <<"Tax: $" << price_per_room * number_of_rooms * sales_tax <<endl;
    cout <<"=======================================" <<endl;
    cout << "Total estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) <<endl;
    cout <<"This estimate is valid for " <<estimate_expiry <<"days" <<endl;

    cout << endl;
    return 0;

}