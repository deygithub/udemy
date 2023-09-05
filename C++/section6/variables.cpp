//Section 6
//Variables
#include <iostream>

using namespace std;

//This program will calculate the area os a room in square feets.

int main()
{
    cout << "Enter the length of the room: ";
    int room_length {0};
    cin >> room_length;

    cout << "Enter the width of the room: ";
    int room_width {0};
    cin >> room_width;

    cout << "The area of the room is " << room_length * room_width << " square feets" <<endl;

    return 0;

}