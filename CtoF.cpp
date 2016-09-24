//This calculates for the user celsius to fahrenheit.
//Written by: JESUS HILARIO HERNANDEZ
//Last modified: Sept. 23, 2016

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{


    double C; // Celsius Variable
    double F; // Fahrenheit Variable

    //Asking the user for celsius temperature.
    cout << "What is your temperature in celsius? " << endl;
    //receiving celsius input into C variable.
    cin >> C;
    // calculating celsius to fahrenheit.
    F = 1.8 * C + 32;
    // Displaying conversion from C to F.
    cout << "\nYour temperature of " << C << " degree celsius" << " has been converted to: " << F << " degree fahrenheit" << endl << endl;

    return 0;
}
