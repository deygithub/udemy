//Section 9
//Do-while

#include<iostream>

using namespace std;

int main(){

    char selection{};
    do
    {
        cout << "\n---------------------" << endl;
        cout <<"1. Do this " << endl;
        cout <<"2. Do that " << endl;
        cout <<"3. Do Something Else " << endl;
        cout <<"Q. Quit  " << endl;
        cout <<"\nEnter your selection: "<< endl;
        cin >> selection;

        if(selection == '1')
            cout << "You chose 1 - doing this" << endl;
        else if (selection == '2')
            cout << "YOu chose 2 - doing that" << endl;
        else if (selection == '3')
            cout << "You chose 3 - doing something else " << endl;
        else if (selection == 'Q' || selection == 'q')
            cout << "Goodbye..." << endl;
        else
            cout << "Unknown option -- try again..." << endl;

        // switch (selection)
        // {
        // case 1:
        //     cout << "You chose 1 - doing this " << endl;
        // case 2:
        //     cout << "You chose 2 - doing that " << endl;
        // case 3:
        //     cout << "You chose 3 - do something else " << endl;
        // case 'Q':
        //     cout << "Goodbye..." << endl;
        // case 'q':
        //     cout << "Goodbye..." << endl;
        // }        

    } while (selection != 'q' && selection != 'Q');


    return 0;

    
}