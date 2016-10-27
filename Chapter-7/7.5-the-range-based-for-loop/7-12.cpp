//**********************************************************
// This program uses a range-based for loop to modify the
// contents of an array.
//
// By: Jesus Hilario Hernandez
// Last updated: October 26, 2016
//**********************************************************
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];

    // Get values for the array.
    for (int &val : numbers)
    {
        cout << "Enter an integer value: ";
        cin >> val;
    }

    // Display the values in the array.
    cout << "Here are the values you entered:\n";
    for (int val : numbers)
    {
        cout << val << endl;
    }
    return 0;
}
