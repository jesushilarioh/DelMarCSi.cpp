//***********************************************************
// This program displays a menu and asks the user to make a
// selection. A do-while loop repeats the program untill the
// user selects item 4 from the menu.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 31, 2016
//***********************************************************
#include <iostream>
#include <iomanip>
using namespace std;

int inputVal(int);              // Input Vlaidation (int)

int main()
{
    // Constants for menu choices
    const int ADULT_CHOICE = 1,
              CHILD_CHOICE = 2,
              SENIOR_CHOICE = 3,
              QUIT_CHOICE = 4;

    // Constants for membership rates
    const double ADULT = 40.0,
                 CHILD = 20.0,
                 SENIOR = 30.0;

    // Variables
    int choice;     // Menu choices
    int months;     // Number of months
    double charges; // Monthly charges

    // Set up numeric output formatting.
    cout << fixed << showpoint << setprecision(2);

    do
    {
        // display the menu.
        cout << "\n\t\tHealth Club Membership Menu\n\n"
             << "1. Standard Adult Membership\n"
             << "2. Child Membership\n"
             << "3. Senior Citizen Membership\n"
             << "4. Quit the Program\n\n"
             << "Enter your choice: ";
        choice = inputVal(choice);

        // Validate the menu selection.
        while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)
        {
            cout << "Please enter a valid menu choice: ";
            choice = inputVal(choice);
        }

        // Process the user's choice.
        if (choice != QUIT_CHOICE)
        {
            // Get the number of months
            cout << "For how many months? ";
            months = inputVal(months);

            // Respond to the user's menu selection.
            switch (choice)
            {
                case ADULT_CHOICE:
                    charges = months * ADULT;
                    break;
                case CHILD_CHOICE:
                    charges = months * CHILD;
                    break;
                case SENIOR_CHOICE:
                    charges = months * SENIOR;
            }

            // Display the monthly charges.
            cout << "The total charges are $"
                 << charges << endl;
        }
    } while (choice != QUIT_CHOICE);
    cout << "Program ending." << endl;
    return 0;
}

//***********************************************
// Definition of function inputVal().           *
// This function is used to validate whether    *
// the user has entered a number. If no         *
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
