//**************************************************************
// This program uses a function to perform division. If division
// by zero is detected, the function returns.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 19th, 2016
//**************************************************************
#include <iostream>
using namespace std;

// Function prototype.
void divide(double, double);

int main()
{
  double num1, num2;

  cout << "Enter two numbers and I will divide the first\n";
  cout << "number by the second number: ";
  cin >> num1 >> num2;
  divide(num1, num2);
  return 0;
}

//*****************************************************************
// Definition of function divide.                                 *
// Uses two parameters: arg1 and arg2. The function divides arg1  *
// by arg2 and shows the result. If arg2 is zero, however, the    *
// function returns.                                              *
//*****************************************************************
