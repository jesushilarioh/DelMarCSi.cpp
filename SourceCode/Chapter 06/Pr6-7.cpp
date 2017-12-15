// This program demonstrates a function with a parameter.
#include <iostream>
using namespace std;

// Function Prototype
void displayValue(int);

int main()
{
   cout << "I am passing several values to displayValue.\n";
   displayValue(5);  // Call displayValue with argument 5
   displayValue(10); // Call displayValue with argument 10
   displayValue(2);  // Call displayValue with argument 2
   displayValue(16); // Call displayValue with argument 16
   cout << "Now I am back in main.\n";
   return 0;
}

//*********************************************************
// Definition of function displayValue.                   *
// It uses an integer parameter whose value is displayed. *
//*********************************************************

void displayValue(int num)
{
   cout << "The value is " << num << endl;
}