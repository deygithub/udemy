//section 8
//Convert Rupees To Dollars

#include <iostream>

using namespace std;

int main(){


    const double usd_per_rs {80.98} ;

    cout <<"Welcome to the Rupee to USD converter " << endl;
    cout << "Enter the value in Rupee: ";

    double rs {0.0};
    double dollars {0.0};
    
    cin >> rs;
    
    dollars = rs / usd_per_rs;

    cout << rs << " Rupees is equivalent to " << dollars << " Dollars" << endl;


    cout << endl;
    return 0;

}