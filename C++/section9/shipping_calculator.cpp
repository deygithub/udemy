//Section 9 
//part of Nested-if statements

/*
Shipping Cost Calculator
Ask the use for package dimensions in inches
length, width, heoght - these should be integers

All dimensions must be 10 inches or less or we cannot ship it
Base cost $2.50
If package volume is greater than 100 cubic inches there is a 10% surcharge
If package volume is greater than 500 cubic inches there is a 25% surcharge

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int length{}, width{}, height{};
    double base_cost{2.50};

    const int tier1_threshold {100}; //volume
    const int tier2_threshold {500}; //volume

    int max_dimension_length {10}; //length

    double tier1_surcharge {0.10}; // 10% extra
    double tier2_surcharge {0.25}; // 25% extra

    // All dimensions must be 10 inches or less

    int package_volume{};

    cout << "Welcome to the package cost claculator " << endl;
    cout << "Enter the length, width and height of the package separated by spaces: " ;
    cin >> length >> width >> height;
    double package_cost{};

    if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length)
        cout << "Sorry, package rejected - dimension exceeded" << endl;
    else {
        package_volume = length * width * height;
        package_cost = base_cost;
        
        if (package_volume > tier2_threshold){
            package_cost += package_cost * tier2_surcharge;
            cout << "adding tier 2 surcharge" << endl;
        }else if (package_volume > tier1_threshold){
            package_cost += package_cost * tier1_surcharge;
            cout << "adding tier 1 surcharge" << endl;
        }
        }

        cout << fixed << setprecision(2);    //prints dollars nicely
        cout << "The volume of your package is : " << package_volume << endl;
        cout << "Your package will cost : $" << package_cost << endl;


        return 0;
}