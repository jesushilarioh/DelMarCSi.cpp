/********************************************************************
*
*	02. SUM OF TWO NUMBERS
*       Write a program that will compute the total sales tax on a $95
*       purchase. Assume the state sales tax is 4% and the county sales tax
*       is 2 percent.
*
* 	Jesus Hilario Hernandez
* 	December 15th 2017
*
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    cout << setprecision(2) << fixed << endl;

    cout << "The total state sales tax on a $95 dollar purchase is $";
    cout << 95 * .04 << endl;

    cout << "The total county sales tax on a $95 dollar purchase is $";
    cout << 95 * .02 << endl << endl;

    return 0;
}
