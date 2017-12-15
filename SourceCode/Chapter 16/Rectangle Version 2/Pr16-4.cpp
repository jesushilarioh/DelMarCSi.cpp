// This program handles the Rectangle class exceptions.
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
   int width;            // Rectangle's width
   int length;           // Rectangle's length
   bool tryAgain = true; // Flag to re-read input
   
   // Create a Rectangle object.
   Rectangle myRectangle;

   // Get the rectangle's width.
   cout << "Enter the rectangle's width: ";
   cin >> width;
   
   // Store the width in the myRectangle object.
   while (tryAgain)
   {
      try
      {
         myRectangle.setWidth(width);
         // If no exception was thrown, then the
         // next statement will execute.
         tryAgain = false;
      }
      catch (Rectangle::NegativeWidth)
      {
         cout << "Please enter a non-negative value: ";
         cin >> width;
      }
   }
   
   // Get the rectangle's length.
   cout << "Enter the rectangle's length: ";
   cin >> length;

   // Store the length in the myRectangle object.
   tryAgain = true;
   while (tryAgain)
   {
      try
      {
         myRectangle.setLength(length);
         // If no exception was thrown, then the
         // next statement will execute.
         tryAgain = false;
      }
      catch (Rectangle::NegativeLength)
      {
         cout << "Please enter a non-negative value: ";
         cin >> length;
      }
   }

   // Display the area of the rectangle.
   cout << "The rectangle's area is "
        << myRectangle.getArea() << endl;
   return 0;
}