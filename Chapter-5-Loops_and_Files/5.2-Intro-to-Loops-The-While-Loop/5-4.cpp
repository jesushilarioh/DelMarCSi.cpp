//***********************************************************
// This program assists a technician in the process of
// checking a substance's temperature
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 31, 2016
//***********************************************************
#include <iostream>
using namespace std;

double inputVal(double);            // Used for input checking
int main()
{
    const double MAX_TEMP = 102.5;  // Maximum temperature
    double temperature;             // To hold the temperature

    // Get current temp.
    cout << "Enter the substance's Celsius temperture: ";
    temperature = inputVal(temperature);

    // As long as necessary, instruct the technician
    // to adjust the thermostat.
    while (temperature > MAX_TEMP)
    {
        cout << "The temperature is too high. Turn the\n";
        cout << "thermostat down and wait 5 minutes.\n";
        cout << "Then take the Celsius temperature agian\n";
        cout << "and enter it here: ";
        temperature = inputVal(temperature);
    }

    // Remind technician to check temp. again
    // in 15 mins.
    cout << "The temperature is acceptable.\n";
    cout << "Check it agian in 15 minutes.\n";

    return 0;

}

double inputVal(double num)
{
    while(!(cin >> num))
    {
        cout << "I'm sorry, a number must be entered...";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}
