//Section 8 Challenge
/*
For this program I will be using US dollars and cents

Write a program that asks the user to enter the following:

An integer representing the number of cents
You may assume that the number of cents entered is greater than or equal to zero

The program should then display how to provide that change to the user

In the US:
1 dollar is 100 cents
1 quarter is 25 cents
1 dime is 10 cents
1 nickel is 5 cents
1 penny is 1 cent

Sample run: 

Enter an amount in cents: 92

You can provide this change as follows:
dollars: 0
quarters: 3
dimes: 1
nickels: 1
penny: 2

Try this problem using modulo operator
*/

#include <iostream>

using namespace std;

int main(){

    const int cpd {100};  // cents per dollar
    const int cpq {25};  // cents per quater
    const int cpdi {10};  // cents per dime
    const int cpn {5};  // cents per nickel
    const int cpp {1};  // cents per penny

    cout << "Welcome to the change calculator " << endl;
    cout << "Enter an amount in cents: ";

    int num ;
    cin >> num;

    int dollar = num / cpd;
    int quarter = (num - (dollar*cpd)) / cpq;
    int dime = (num - (dollar*cpd + quarter*cpq)) / cpdi;
    int nickel = (num - (dollar*cpd + quarter*cpq + dime*cpdi)) / cpn;
    int penny = (num - (dollar*cpd + quarter*cpq + dime*cpdi + nickel*cpn)) / cpp;

    cout << "You can provide this change as follows: " << endl;
    cout << "Dollars: " << dollar << endl;
    cout << "Quarters: " << quarter << endl;
    cout << "Dimes: " << dime << endl;
    cout << "Nickels: " << nickel << endl;
    cout << "Penny: " << penny << endl;
    

    //SIR'S SOLUTION

    // const int dollar_value {100};
    // const int quarter_value {25};
    // const int dime_value {10};
    // const int nickel_value {5};

    // int change_amount {};

    // //solution not using modulo operator
    
    // cout <<"Solution not using modulo operator" << endl;
    // cout <<"Enter an amount in cents: ";
    // cin >> change_amount ;

    // int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

    // dollars = change_amount / dollar_value;
    // balance = change_amount - (dollars * dollar_value);

    // quarters = balance / quarter_value;
    // balance -= quarters * quarter_value;

    // dimes = balance / dime_value;
    // balance -= dimes * dime_value;

    // nickels = balance / nickel_value;
    // balance -= nickels * nickel_value;

    // pennies = balance ;
   
    // cout << "----------------------------" << endl;
    // cout << "Solution using modulo operator" << endl;
    // cout << "----------------------------" << endl;

    // balance = dollars = quarters = dimes = nickels = pennies = 0; // reset everything to zero

    // dollars = change_amount / dollar_value;
    // balance = change_amount % dollar_value;

    // quarters = balance / quarter_value;
    // balance %= quarter_value;

    // dimes = balance / dime_value;
    // balance %= quarter_value;

    // nickels = balance / nickel_value ;
    // balance %= nickel_value ;

    // pennies = balance;

    // cout <<"\nYou can provide this change as follows: " << endl;
    // cout <<"dollars : " << dollars << endl;
    // cout <<"quarters : " << quarters << endl;
    // cout <<"dimes : " << dimes << endl;
    // cout <<"nickels : " << nickels << endl;
    // cout <<"pennies : " << pennies << endl;

    cout << endl;
    return 0;

}