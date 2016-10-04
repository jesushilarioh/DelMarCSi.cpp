//********************************************************************
//
// JESUS HILARIO HERNANDEZ
// Course: COSC 1436.001 Programming FUndamentals 1
// Lab # 5 Ch 3 Programming Challenge #10
//  Celsius to Fahrenheit extended
// Due Date: October 5, 2016
// Instructor: Korinne Caruso
//
// Purpose: This program converts Celsius to Fahrenheit or
// Fahrenheit to Celsius. A menu is provided for the user to choose from.
// The three choices will be 1. Convert Celsius to Fahrenheit,
// 2. Fahrenheit to Celsius, and 3. End session. Aside from these
// three menu options a quit the program option is available as well.
//
// Input: Input will come from the user, through the (cin) object.
// The information the user provides will either be stored
// in a double, string, char, or an int. Further, input validation will
// occur each time the user provides information at the keyboard.
// If invalid input should occur, the user will be redirected through
// a while loop, to input valid a valid choice.
//
// Output: All output will be sent using the (cout) object.
// The user's username along with a brief description of what
// the program does is displayed when the program is run.
// A menu with three options will be provided for the user
// to choose from. At one point in the program,
// the user will be given the option to continue the
// program or to quit the program.
//
//********************************************************************

#include <iostream>
#include <string>
#include <iomanip>
#include <istream>
using namespace std;

int main()
{
    //Constanst
    const int CHOICE_1 = 1,
    CHOICE_2 = 2,
    CHOICE_3 = 3;

    //Variables:
    double C,           //Holds Celsius Temp
           F;           //Holds Fahrenheit Temp
    string name;        //Holds Username
    char   keepGoing;   //Holds (Y/N) Ans.
    int    choice;      //Holds Menu choice

    //Ask for username
    cout << "Hello, enter a username? ";
    getline(cin, name);

    //address user
    //discribe program
    cout << "\n\t\tHi, " << name << "."
    << "\n\t\t\tThis program converts "
    << "\n\t\t\tCelsius to Fahrenheit or "
    << "\n\t\t\tFahrenheit to Celsius.\n"
    << "\n\t\tWould you like to continue? (Y/N) ";
    cin >> keepGoing;

    //Error checking (Y/N) response
    while(!(keepGoing == 'y' || keepGoing == 'Y' || keepGoing == 'n' || keepGoing == 'N'))
    {
        //explain error
        cout << "\n\t\tError: Choose either Y or N" << endl
             << "\t\tWould you like to continue? (Y/N) ";
        //clear input stream
        cin.clear();

        //discard previous input
        cin.ignore(1200, '\n');

        //Look for valid input
        cin >> keepGoing;
    }

    //If YES
    if (keepGoing == 'y' || keepGoing == 'Y')
    {
        //Do-While menu
        do
        {
            cout << "\n\t\tHere are your menu options: \n"
            << "\t\t\t1. Convert Celsius to Fahrenheit" << endl
            << "\t\t\t2. Convert Fahrenheit to Celsius" << endl
            << "\t\t\t3. Begin again\t\t\t\t";

            // Error checking menu choice
            while(!(cin >> choice) || choice < CHOICE_1 || choice > CHOICE_3)
            {
                //explain error
                cout << "\n\t\tError: You must choose either 1, 2, or 3.";
                //clear input stream
                cin.clear();
                //discard previous input
                cin.ignore(1200, '\n');
            }

            //If choice 1 || 2
            if (choice == 1 || choice == 2 || choice == 3)
            {
                //switch menu
                switch (choice)
                {
                        //Choice 1
                    case CHOICE_1:
                        //Ask for Celsius temp.
                        cout << "\n\t\tWhat is the Celsius temperature "
                        << "\n\t\tthat you would wish to convert? ";

                        //Error check choice 1
                        while (!(cin  >> C))
                        {
                            //Explain Error
                            cout << "\n\t\tError: A number must be entered. "
                            << "\n\t\tWhat is the Celsius temperature? ";

                            //clear input stream
                            cin.clear();

                            //discard previous input
                            cin.ignore(1200, '\n');
                        }

                        //calculate C to F
                        F = (9.0/5.0) * C + 32;

                        //Display C to F conversion
                        cout << "\n\t\t\t"<< C << "°C = "
                        << setprecision(1) << fixed << F << "°F" << endl;
                        cout << endl;
                        //Ask user if would like to make another conversion
                        cout << "\t\tWould you like to make another "
                        << "conversion?\n\t\tY: to make another conversion\n\t\t"
                        << "N: to quit the program ";
                        cin >> keepGoing;
                        break;

                        //Choice 2
                    case CHOICE_2:
                        cout << "\n\t\tWhat is the Fahrenheit temperature " << endl;
                        cout << "\t\tthat you would wish to convert? ";

                        //Error check choice 2
                        while(!(cin >> F))
                        {
                            //Explain Error
                            cout << "\n\t\tError: A number must be entered. "
                            << "\n\t\tWhat is the Fahrenheit temperature?";

                            //Clear input stream
                            cin.clear();

                            //Discard previous input
                            cin.ignore(1200, '\n');
                        }

                        //Calculate F to C
                        C = (F - 32) * (5.0/9.0);

                        //Display F to C conversion
                        cout << "\n\t\t\t" << F << " Fahrenheit = "
                        << setprecision(1)<< fixed << C << " Celsius" << endl;
                        cout << endl;
                        //Ask user if would like to make another conversion
                        cout << "\t\tWould you like to make another "
                        << "conversion (Y/N)? ";
                        cin >> keepGoing;
                        break;
                        //Choice 3
                    case CHOICE_3:
                        cout << "\n\t\tOk." << endl;
                        break;

                        //end Switch menu
                }

                //end If choice 1 || 2
            }

            while(!(keepGoing == 'y' || keepGoing == 'Y' || keepGoing == 'n' || keepGoing == 'N'))
            {
                //Explain error
                cout << "\n\t\tError: Neither Y nor N was pressed." << endl
                     << "\t\tWould you like to make another conversion? ";
                //Clear input stream
                cin.clear();
                //Discard previous input
                cin.ignore(1200, '\n');

                cin >> keepGoing;
            }

        } while (keepGoing == 'y' || keepGoing == 'Y' || choice == 3);
        //End Do-While menu.

        //End statement if NO
        cout << "\n\t\tProgram ended." << endl;
    }
    //If NO
    else if (keepGoing == 'n' || keepGoing == 'N')
    {
        cout << '\n' << setw(25) << "Ok." << endl;
        cout << '\n' << setw(34) << "Have a nice day! :)" << endl;
    }

    //for padding before the 0 exit code.
    cout << endl << endl;

    return 0;
}
