/********************************************************************
*
*	Checkpoint 4.5
*
*       Write an if statement that performs the following logic: if
*       the variable price is greater than 500, then assign 0.2 to
*       the variable discountRate.
*
* 	Jesus Hilario Hernandez
* 	February 13, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int price        = 20,
        discountRate = 87;

    // Solution
    if (price > 500)
    {
        discoutRate = static_cast<double>(0.2);
    }

    // Display solution
    cout << endl;
    cout << "if   price       = " << price << endl;
    cout << "then discoutRate = " << discoutRate << endl << endl;

    // Terminate Program False
    return 0;
}
