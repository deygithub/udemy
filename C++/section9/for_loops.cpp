//Section 9
//for loops

#include <iostream>
#include <vector>
using namespace std;

int main(){

    // for (int i{1}; i <= 10 ; ++i)
    //     cout << i << endl;

    // for (int i{1}; i <= 10 ; i+=2)
    //     cout << i << endl;

    // for ( int i{10} ; i>0 ; --i)
    //     cout << i << endl;
    // cout << "Blast off!" << endl;

    // for ( int i{10}; i<= 100 ; i+=10)
    //     if(i% 15 == 0)
    //         cout << i << endl;

    // for (int i{1}, j{5}; i<= 5; ++i , ++j)
    //     cout << i << " + " << j << " = " << i+j << endl;

    // for (int i{1}; i <= 100 ; ++i){
    //     cout << i;
    //     // if ( i % 5 == 0)
    //     //     cout << endl;
    //     // else
    //     //     cout << " ";
    //     cout <<((i%10==0)? "\n": " ");
    // }

    vector <int> nums{10,20,30,40,50};
    for (unsigned int i{0}; i < nums.size() ; ++i)      //int is initialized to 0 as vectors start from 0
        cout << nums[i] << endl;                        // nums.size() works with signed so unsignes int should be initialized



    return 0;
}