#include <iostream>

int main()
{
    int fav;
    std::cout << "Enter your favorite number between 1 and 100:" << std::endl;
    std::cin  >> fav;
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
   
    /*std::cout << "No really!! ";
    std::cout << fav;
    std::cout << " is my faviorite number too!";*/

    std::cout << "No really!! " <<fav <<" is my favotrite number too!";

    return 0;

}