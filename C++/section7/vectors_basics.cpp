//Section 7
//Vectors
#include <iostream>
#include <vector>    //don't forget this in order to use vectors

using namespace std;

int main(){

    //vector <char> vowels;  // vector vowels declared having characters but is EMPTY
    //vector <char> vowels(5);   //5 characters long, each initialised to 0
    vector <char> vowels {'a','e','i','o','u'};

    cout << vowels[0] << endl; // array syntax
    cout << vowels[4] << endl;

    //vector <int> test_scores(3)  // 3 elements all initialized to 0
    //vector <int> test_scores(3, 100) // 3 elements all initialized to 100

    vector <int> test_scores {100,98,89};

    //array syntax

    cout << "\nThe test scores using array syntax: " << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    //vector syntax
    
    cout <<"\nThe test scores using vector syntax: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout <<"\nThere are " << test_scores.size() << " scores in the vector." << endl;
    
    //changing vector values

    cout << "\nEnter three test scores : " << endl;
    cin >> test_scores.at(0) ;
    cin >> test_scores.at(1) ;
    cin >> test_scores.at(2) ;

    cout << "\nThe updates test scores are: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    //increasing vector size
   
    cout << "\nEnter a test score to add to the vector: " << endl;
    
    int score_to_add {0};
    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "Enter one more test scoere to add to the vector: " << endl;

    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "\nThe test scores are now:" << endl;

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;

    cout << "\nThere are now " << test_scores.size() << " Scores in the vector." << endl;

    //cout << "\nThis shpould cause an exception!! " << test_scores.at(10) <<endl;

    //Example of a 2D vector

    vector<vector<int>> movie_ratings
    {
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}
    };

    cout <<"\nHere are the movie rating for the reviewer #1 using array syntax:" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;
    

    cout <<"\nHere are the movie rating for the reviewer #1 using vector syntax" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;

    cout << endl;
    

    return 0;
}