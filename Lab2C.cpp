#include <iostream>
using namespace std;

int main ()
{
    //Declare Everything
    string name;
    double salary;
    int rate;
    double bonus;

    //Getting name
    cout << "Enter name: ";
    getline (cin, name);

    //Getting salary
    cout << "Enter salary: ";
    cin >> salary;
    
    //Getting rate
    cout << "Enter rate: ";
    cin >> rate;
    rate = rate % 6 + 10;
    
    //Compute bonus
    bonus = salary * static_cast<float>(rate/100);

    //Print
    cout << name << " earned a bonus of " << bonus << endl;


    return 0;
}