//Section 7
//arrays

#include <iostream>

using namespace std;

int main(){

    char vowels [] {'a','e','i','o','u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] <<endl;

    // cin >> vowels[5]; out of bounds - don't try this could be very serious

    double hi_temps [] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7;    //set the first high temperature to 100.7

    cout << "The first high temperature now is: " << hi_temps[0] << endl;


    int test_scores [5]{100,90,80,70,60}; 

    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Forth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;
    
    cout << "Enter five test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "\nThe updates test scores are: " << endl;
    cout << "The first score at index 0: " << test_scores[0] << endl;
    cout << "The second score at index 1: " << test_scores[1] << endl;
    cout << "The third score at index 2: " << test_scores[2] << endl;
    cout << "The forth score st index 3: " << test_scores[3] << endl;
    cout << "the fifth score at index 4: " << test_scores[4] << endl;

    cout << "Notice what the value of the value of the array name is " << test_scores << endl;  

    return 0;
}