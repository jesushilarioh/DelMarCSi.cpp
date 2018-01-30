/********************************************************************
*
*	12. CELSIUS TO FAHRENHEIT
*
*       Write a program that converts Celsius temperatures to
*       Fahrenheit temperatures. The formula is
*
*       F = (9/5)C + 32
*
*       F is the Fahrenheit temperature, and C is the
*       Celsius temperature.
*
*
* 	Jesus Hilario Hernandez
* 	January 17th 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    float F, C;

    // Ask user to enter Celsius Temp.
    cout << endl;
    cout << "Enter the current Celsius Temperature: ";
    cin >> C;

    // Calculate Fahrenheit
    F = ((9.0 / 5) * C) + 32;

    // Display Fahrenheit
    cout << setprecision(2) << fixed << right << endl;
    cout << "Celsius    Temp = " << setw(6) << C << endl;
    cout << "Fahrenheit Temp = " << setw(6) << F << endl;
    cout << endl;

    // Terminate Program
    return 0;
}
