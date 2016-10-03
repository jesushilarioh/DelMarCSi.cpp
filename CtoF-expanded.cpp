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
// Fahrenheit to Celsius.
//
// Input: Some input will be expressed in a do while loop,
// while Celsius or Fahrenheit input will be processed and
// calculated to convert Celius to Fahrenheit and
// Farenheit to Celsius.
//
// Output: The user will asked their name. There name will
// be displayed back to them. They will also have a menu
// to choose from. A quit the program option will be
// available to the user through a while loop.
//********************************************************************

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    //Constanst
    const int CHOICE_1 = 1,
    CHOICE_2 = 2,
    CHOICE_3 = 3;
    //Variables:
    double C,           //C will hold celsius input
    F;           //F will hold Fahrenheit input
    string name;        //name variable holds user name.
    char   keepGoing;   //keepGoing holds (Y/N) answer in if statement
    int    choice;      //holds choice 1 2 or 3 in menu options

    //Ask for username
    cout << "Hello, enter a username? ";
    getline(cin, name);

    //address user by name and discribe the nature of the program.
    //Then, ask if user would like to continue.
    cout << "\n\t\tHi, " << name << "."
    << "\n\t\t\tThis program converts "
    << "\n\t\t\tCelsius to Fahrenheit or "
    << "\n\t\t\tFahrenheit to Celsius.\n"
    << "\n\t\tWould you like to continue? (Y/N) ";
    cin >> keepGoing;



    //If statement for (Y/N) question
    if (keepGoing == 'y' || keepGoing == 'Y')
    {
        do // user-controled loop for menu options 1, 2, or 3
        {
            cout << "\n\t\tAwesome! Here are your menu options: \n" << endl;
            cout << "\t\t\t1. Celsius to Fahrenheit" << endl;
            cout << "\t\t\t2. Fahrenheit to Celsius" << endl;
            cout << "\t\t\t3. Begin again\t\t\t\t";

            // while loop for error checking
            while(!(cin >> choice) || choice < CHOICE_1 || choice > CHOICE_3)
            {

                cout << "\n\t\tOops! You must choose 1, 2, or 3."<< endl;
                cout << "\n\t\tHere are your menu options: \n" << endl;
                cout << "\t\t\t1. Celsius to Fahrenheit" << endl;
                cout << "\t\t\t2. Fahrenheit to Celsius" << endl;
                cout << "\t\t\t3. Begin again\t\t\t\t";
                //to clear and restore input stream back to a working state
                cin.clear();
                //to drop and discard whatever is in choice variable.
                cin.ignore(1200, '\n');

            }

            if (choice == 1 || choice == 2)
            {
                switch (choice)
                {
                    case CHOICE_1:
                        cout << "\n\t\tWhat is the Celsius temperature "
                        << "\n\t\tthat you would wish to convert? ";
                        while (!(cin  >> C))
                        {
                            cout << "\n\t\tError: A number must be entered. Try again: "
                            << "\n\t\tWhat is the Celsius temperature? ";
                            //to clear and restore input stream back to a working state
                            cin.clear();
                            //to drop and discard whatever is in C varable
                            cin.ignore(1200, '\n');
                        }
                        F = (9.0/5.0) * C + 32; //calculate C to F cnversion
                        cout << "\n\t\t\t"<< C << "°C = "
                        << setprecision(1) << fixed << F << "°F" << endl;
                        cout << endl;
                        break;

                    case CHOICE_2:
                        cout << "\n\t\tWhat is the Fahrenheit temperature " << endl;
                        cout << "\t\tthat you would wish to convert? ";
                        cin >> F;
                        C = (F - 32) * (5.0/9.0);
                        cout << "\n\t\t\t" << F << "°F = "
                        << setprecision(1)<< fixed << C << "°C" << endl;
                        cout << endl;
                        break;
                }
            }
            cout << "\t\tWould you like to make another "
            << "conversion (Y/N)? ";
            cin >> keepGoing;
            if (keepGoing == 'n' || keepGoing == 'N')
            {
                cout << '\n' << setw(25) << "Ok." << endl;
                cout << '\n' << setw(34) << "Have a nice day! :)" << endl;
            }
            else
            {
                cout << "\n\t\tOops! Neither Y nor N was pressed!" << endl;
                cout << "\t\tRe-run the program and try again." << endl << endl;
            }
        } while (keepGoing == 'y' || keepGoing == 'Y');
    }
    else if (keepGoing == 'n' || keepGoing == 'N')
    {
        cout << '\n' << setw(25) << "Ok." << endl;
        cout << '\n' << setw(34) << "Have a nice day! :)" << endl;
    }
    else
    {
        cout << "\n\t\tOops! Neither Y nor N was pressed!" << endl;
        cout << "\t\tRe-run the program and try again." << endl << endl;
    }

    cout << endl;//for padding before the 0 exit code.
    cout << endl;
    return 0;
}
