//section 6 challenge
/*
Frank's Carpet Cleaning Service
charge: 
$25 per small room
$35 per large room
Sales tax rate is 6%
Estimates are vald for 30 days

Prompt the user for the number of small and large rooms they would like cleaned and provide an estimate such as:

PSEUDOCODE
Estimate for carpet cleaning service
No. of small rooms: 3
No. of large rooms: 1
Price per small room: $25
Price per large room: $35
cost: $110
tax: $6.6
total estimate: $116.6
This estimate's valid for 30 days
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl ;
    cout << "\nHow many small rooms would you like cleaned? ";

    int small_rooms {0};
    cin >> small_rooms;

    cout << "\nHow many large rooms would you like cleaned? ";

    int large_rooms {0};
    cin >> large_rooms;

    const double small_room_charge {25.0};
    const double large_room_charge {35.0};
    const float sales_tax {0.06};
    const int validity {30};

    double clean_small;
    clean_small = small_rooms * small_room_charge;
    double clean_large;
    clean_large = large_rooms * large_room_charge;
    double tax_apply;
    tax_apply = (clean_large + clean_small) * sales_tax;

    cout << "\nEstimate for carpet cleaning service:" << endl;
    cout << "Number of small rooms: " <<small_rooms <<endl;
    cout << "Number of large rooms: " <<large_rooms <<endl;
    
    cout << "Price per small room: $" <<small_room_charge <<endl;
    cout << "Price per large room: $" <<large_room_charge <<endl;
    
    cout << "Cost of cleaning small rooms: $" << clean_small << endl;
    cout << "Cost of cleaning large rooms: $" << clean_large << endl;
    
    cout << "Tax applicable: $" << tax_apply << endl;
    
    cout << "====================================" << endl;
    
    cout << "Total Estimate: $" << clean_small + clean_large + tax_apply << endl;
    cout << "This Estimate is valid for " << validity <<"days" << endl;

    cout << endl;
    return 0;

} 