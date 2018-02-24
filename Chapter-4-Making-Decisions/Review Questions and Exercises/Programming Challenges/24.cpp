/********************************************************************
*
*	24. Long-Distance Calls
*
*       A long-distance carrier charges the following rates for
*       telephone calls:
*
*       ============================================================
*       Starting Time of Call           Rate per Minute
*       ------------------------------------------------------------
*       00:00-06:59                     0.05
*       07:00-19:00                     0.45
        19:01-23:59                     0.20
*       ============================================================
*
*       Write a program that asks for the starting time and the number
*       of  minutes of the call, and displays the charges. The program
*       should ask for the time to be entered as a floating- point
*       number in the form HH.MM. For example, 07:00 hours will be
*       entered as 07.00, and 16:28 hours will be entered as 16.28.
*
*       Input Validation: The program should not accept times that are
*       greater than 23:59. Also, no number whose last two digits are
*       greater than 59 should be accepted. Hint: Assuming num is a
*       floating-point variable, the following expression will give you
*       its fractional part:
*
*       num − static_cast<int>(num)
*
* 	Jesus Hilario Hernandez
* 	February 1, 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    float starting_time;
    // Ask for starting_time
    cout << "What is the starting time? (HH.MM) \n";
    cout << "e.g. 07.46 is 7 hours and 46 minutes: ";
    cin >> starting_time;

    cout << endl;
    cout << starting_time - static_cast<int>(starting_time) << endl;
    cout << endl;

    // Validate starting_time
    // if (starting_time > 23.59)
    // {
    //     cout << "We're sorry, time must not exceed 23.59.\n";
    //     cout << "Rerun the program and try again." << endl;
    // }
    // else
    // {
    //     if ()
    // }

    // Ask for num_of_mins
    // Display charges
    // Terminate program
    return 0;
}
