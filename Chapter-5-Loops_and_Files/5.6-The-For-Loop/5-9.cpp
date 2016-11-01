//***********************************************************
// This program displays the numbers 1 tyhrough 10 and their
// squares.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 31, 2016
//***********************************************************
#include <iostream>
using namespace std;

int main()
{
    const int MIN_NUMBER = 1,   // Starting value
              MAX_NUMBER = 10;  // Ending value
    int num;

    cout << "Number Number Squared\n";
    cout << "------------------------\n";

    for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)
    {
        cout << num << "\t\t" << (num * num) << endl;
    }

    return 0;
}
