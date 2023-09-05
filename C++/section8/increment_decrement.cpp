//section 8
/*
increment operator ++
decrement operator --
this file contains only examples of increment oprator
decrement operator works in the same way as increment operator


increments or decrements its operand by 1
can be used with integers, floating point types and pointers

prefix ++ num
postfix num ++

CAUTION: Don't overuse this operator!
ALERT!! Never use it twice for the same variable in the same statement!!
*/

#include <iostream>

using namespace std;

int main(){

    int counter {10};
    int result {0};

//Example 1 - Simple Increment
    // cout << "Counter: " << counter << endl;

    // counter = counter + 1;
    // cout<< "Counter: " << counter << endl;

    // counter ++;
    // cout << "Counter: " << counter << endl;

    // ++counter;
    // cout << "Counter: " << counter <<endl;

//Example 2 - Preincrement
    // counter = 10;
    // result = 0;

    // cout << "Counter: " <<counter << endl;

    // result = ++counter;  //note the pre increment
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << counter << endl;

//Example 3 - Postincrement
    // counter = 10;
    // result = 0;

    // cout << "Counter: " << counter << endl;

    // result = counter++;  //note the post increment
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

//Example 4 
    // counter = 10;
    // result = 0;

    // cout << "Counter: " << counter << endl;
    
    // result = ++counter + 10;   //note the pre increment

    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

//Example 5
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = counter++ +10; //note the post increment

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;


    cout << endl;
    return 0;
      
}