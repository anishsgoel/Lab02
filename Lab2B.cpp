#include <iostream>
#include <math.h>
using namespace std;

int main()
{   
    //Declare variables
    float radius;
    float pi;
    float volume;
    
    //User input for radius
    cout << "Enter the radius of the sphere (in cm): ";
    cin >> radius;

    //Compute volume
    pi = 3.14159;
    volume = (4.0/3.0) * pi * pow(radius, 3.0);

    //Print
    cout << "The volume of the sphere is: " << volume << endl;

    return 0;
}