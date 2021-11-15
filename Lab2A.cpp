#include <iostream>
using namespace std;

int main()
{
    
    //Declare variables
    int var1;
    char var2;
    float var3;
    float var4;

    //Assign Variables
    var1 = 30;
    var2 = 'G';
    var3 = 4.5;

    //Compute var4
    var4 = var3 + var2 % var1;

    //Print variables
    cout << var4 << endl;

    return 0;
}