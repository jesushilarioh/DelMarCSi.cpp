//********************************************************************
// This program partially simulates a digital clock. It displays
// the seconds from 0 to 59.
//
// JESUS HILARIO HERNANDEZ
// Last updated: October 7, 2016
//
//********************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << right;

    /*
     * The fill() member function of cout changes the fill character, which
     * is a space by default. In the program segment above, the fill function
     * causes a zero to be printed in front of all single digit numbers.
     */
    cout.fill('0');
    for (int seconds = 0; seconds < 60; seconds++)
    {
        cout << setw(2) << seconds << endl;
    }
    return 0;
}
