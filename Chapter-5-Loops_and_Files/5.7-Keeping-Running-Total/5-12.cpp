//***********************************************************
// This program takes daily sales figures over a period of
// time and calculates their total.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 31, 2016
//***********************************************************
#include <iostream>
#include <iomanip>
using namespace std;

int inputVal(int);              // Input Vlaidation (int)
double inputVal(double);            // Input Validation (char)

int main()
{
    int days;           // Number of days
    double total = 0.0; // Accumulator, initialized with 0

    // Get the number of days.
    cout << "For how many days do you have sales figures?";
    days = inputVal(days);

    // Get the sales for each day and accumulate a total.
    for (int count = 1; count <= days; count++)
    {
        double sales;
        cout << "Enter the sales for day " << count << ": ";
        sales = inputVal(sales);
        total += sales;     // Accumulate the running total.
    }

    // Display the total sales.
    cout << fixed << showpoint << setprecision(2);
    cout << "The total sales are $" << total << endl;
    return 0;

}

//***********************************************
// Definition of function inputVal().           *
// This function is used to validate whether    *
// the user has entered a number (int). If no   *
// number is entered at the keyboard, the       *
// while loop will prompt the error and ask     *
// for valid input.                             *
//***********************************************

int inputVal(int num)
{
    while(!(cin >> num))
    {
        cout << "I'm sorry, a number must be entered...";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}

//***********************************************
// Definition of function inputVal().           *
// This function is used to validate whether    *
// the user has entered a number (double). If   *
// no number is entered at the keyboard, the    *
// while loop will prompt the error and ask     *
// for valid input.                             *
//***********************************************

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
