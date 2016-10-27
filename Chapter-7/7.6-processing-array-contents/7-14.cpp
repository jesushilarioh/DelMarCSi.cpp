//***********************************************************
// This program reads data from a file into an array.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 26, 2016
//***********************************************************
#include <iostream>
#include <fstream>
using namespace std;

// Function prototype
int inputVal(int);          // Error checking for int

int main()
{
    const int ARRAY_SIZE = 100; // Array size
    int numbers[ARRAY_SIZE];    // Array with 100 elements
    int count = 0;              // Loop counter variable
    ifstream inputFile;         // Input file stream object

    //Open file.
    inputFile.open ("numbers.txt");

    // Read the numbers from the file into the array.
    // After this loop executes, the count variable will hold
    // the number of values that were stored in the array.
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
    {
        count++;
    }

    // Close file
    inputFile.close();

    // Display the numbers read.
    cout << "The numbers are: " << endl;
    for (int index = 0; index < count; index++)
    {
        cout << numbers[index] << " " << endl;
    }
    cout << endl;
    return 0;
}

//*********************************************************
// Definition of function inputVal.                       *
// Checks for valid input when using integers.            *
//*********************************************************
// Input validation function for int
int inputVal(int number)
{
    while (!(cin >> number))
    {
        // Explain Error
        cout << "Sorry, a number must be entered..." << endl;
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
    }
    return number;
}
