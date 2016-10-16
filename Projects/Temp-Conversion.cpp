//********************************************************************
//
// JESUS HILARIO HERNANDEZ
// Course: COSC 1436.001 Programming Fundamentals 1
// Lab # 6 Temperature Functions//  Celsius to Fahrenheit extended
// Due Date: October 5, 2016
// Instructor: Korinne Caruso
//
// PURPOSE: This program converts Celsius to Fahrenheit or
// Fahrenheit to Celsius. Functions will be used within the program to
// display a menu, convert C to F, convert F to C, display results,
// send results to an external text file, and to handle error checking
//
// INPUT: Input will come from the user, through the (cin) object.
// The information the user provides will either be stored
// in a double, char, or an int. Further, input validation will
// occur each time the user provides information at the keyboard.
// If invalid input should occur, the user will be redirected through
// a while loop, to input only valid information.
//
// OUTPUT: All output will be sent using the (cout) object.
// A brief description of what
// the program does will be displayed when the program is run.
// A menu with three options will be provided for the user
// to choose from. At one point in the program,
// the user will be given the option to continue the
// program, end the program, or quit the program.
//
//********************************************************************

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

ofstream outputFile;

// Global Constants
const int CHOICE_1 = 1,
CHOICE_2 = 2,
CHOICE_3 = 3;

// Function Prototypes
void displayMenu();                             // Display menu
double convertCtoF(double, double);             // C to F Conversion
double convertFtoC(double, double);             // F to C Conversion
void displayResults(double, double);                          // Display result
void sendResults(int, double, double);                    // Send results to .txt file
int errorChecking(int);   // Error checking Handler

int main()
{
    outputFile.open("results.txt");
    // Variables:
    double C, // Holds Celsius Temp
    F; // Holds Fahrenheit Temp
    int choice, switchChoice; //Holds Menu choice
    char choice2; // Hold (Y/N) Ans.


    cout << "\n\n\t\tThis program converts Celsius to fahrenheit "
    << "\n\t\tor Fahrenheit to Celsius." << endl;

    // Do-While menu
    do
    {
        // Display Menu
        displayMenu();

        // Error checking menu choice
        switchChoice = errorChecking(choice);

        // Switch menu
        switch (switchChoice)
        {
                // Choice 1
            case CHOICE_1:
                // Ask for Celsius temp.
                cout << "\n\t\tWhat is the Celsius temperature "
                << "\n\t\tthat you would wish to convert? ";

                // Error check choice 1
                while (!(cin >> C))
                {
                    // Explain Error
                    cout << "\n\t\tError: A number must be entered. "
                    << "\n\t\tWhat is the Celsius temperature? ";
                    // Clear input stream
                    cin.clear();
                    // Discard previous input
                    cin.ignore(1200, '\n');
                }

                // Calculate C to F
                F = convertCtoF(F = 0, C);

                // Display C to F conversion
                displayResults(C, F);

                // Send Results to results.txt
                sendResults(switchChoice, C, F);

                // Asking if user would like to make another conversion
                cout << "\n\t\tWould you like to make another conversion?" << endl;
                cout << "\t\tY: if yes" << endl;
                cout << "\t\tN: if no \n\t\t";
                cin >> choice2;

                // Validating user input, whether y or n is pressed.
                while(!(choice2 == 'y' || choice2 == 'Y' || choice2 == 'n' || choice2 == 'N'))
                {
                    cout << "Error: choose either Y or N." << endl;
                    // Clear input stream
                    cin.clear();
                    // Discard previous input
                    cin.ignore(1200, '\n');

                    cin >> choice2;
                }
                // If pressed Y, acknowledge that they did
                if (choice2 == 'y' || choice2 == 'Y')
                {
                    cout << "\n\n\t\tOk. " ;

                }
                // If pressed N, acknowledge that they did
                else if (choice2 == 'n' || choice2 == 'N')
                {
                    cout << "\n\nThank you! Have a nice day.\n\n" << endl;
                    cout << "\n\n\t\tThis program converts Celsius to fahrenheit "
                    << "\n\t\tor Fahrenheit to Celsius." << endl;

                }
                break; // End of case 1

                // Choice 2
            case CHOICE_2:
                cout << "\n\t\tWhat is the Fahrenheit temperature " << endl;
                cout << "\t\tthat you would wish to convert? ";

                // Error check choice 2
                while(!(cin >> F))
                {
                    // Explain Error
                    cout << "\n\t\tError: A number must be entered. "
                    << "\n\t\tWhat is the Fahrenheit temperature? ";
                    // Clear input stream
                    cin.clear();
                    // Discard previous input
                    cin.ignore(1200, '\n');
                }

                // Calculate F to C
                C = convertFtoC(C = 0, F);

                // Display F to C conversion
                displayResults(F, C);

                // Send Results to results.txt
                sendResults(switchChoice, F, C);

                // Asking if user would like to make another conversion
                cout << "\n\t\tWould you like to make another conversion?" << endl;
                cout << "\t\tY: if yes" << endl;
                cout << "\t\tN: if no \n\t\t";
                cin >> choice2;

                // Validating user input, whether y or n is pressed.
                while(!(choice2 == 'y' || choice2 == 'Y' || choice2 == 'n' || choice2 == 'N'))
                {
                    cout << "Error: choose either Y or N." << endl;
                    // Clear input stream
                    cin.clear();
                    // Discard previous input
                    cin.ignore(1200, '\n');

                    cin >> choice2;
                }

                // If Y pressed, acknowledge that they did
                if (choice2 == 'y')
                {
                    cout << "\n\n\t\tOk. " ;

                }
                // If N pressed, acknowledge that they did
                else if (choice2 == 'n')
                {
                    cout << "\n\nThank you! Have a nice day.\n\n" << endl;
                    cout << "\n\n\t\tThis program converts Celsius to fahrenheit "
                    << "\n\t\tor Fahrenheit to Celsius." << endl;

                }
                break; // End of case 2

            case CHOICE_3 :
                // Let user know that they have chosen to quit the program.
                cout << "\n\t\tQuitting program..." << endl;
                cout << "\n\t\tProgram Ended." << endl;
                break; // End of case 3

        }   // End Switch menu


    } while (switchChoice == 1 || switchChoice == 2);// End Do-While menu.

    // For padding before the 0 exit code.
    cout << endl << endl;

    outputFile.close();

    return 0;
}

// Display menu
void displayMenu()
{
    cout << "\n\t\tHere are your options: \n"
    << "\t\t\t1. Convert Celsius to Fahrenheit" << endl
    << "\t\t\t2. Convert Fahrenheit to Celsius" << endl
    << "\t\t\t3. Quit Program\t\t\t\t";
}

// C to F Conversion
double convertCtoF(double num1, double num2)
{
    num1 = (9.0/5.0) * num2 + 32;
    return num1;
}

// F to C Conversion
double convertFtoC(double num1, double num2)
{
    num1 = (num2 - 32) * (5.0/9.0);
    return num1;
}

// Display result
void displayResults(double num1, double num2)
{
    cout << setprecision(1) << fixed;
    cout << "\n\n\t\t\t"<< num1 << " = "
         << num2 << endl;
    cout << endl;
}

// Send to results.txt file
void sendResults(int num, double num1, double num2)
{
    if (CHOICE_1 == num)
    {
        outputFile << setprecision(1) << setw(10) << num1 << setw(10) << " Celsius    = "
                   << num2 << " Fahrenheit" << endl;
    }
    else if (CHOICE_2 == num)
    {
        outputFile << setprecision(1) << setw(10) << num1 << setw(10) << " Fahrenheit = "
                   << num2 << " Celsius" << endl;
    }
}

// Error checking Handler
int errorChecking(int num)
{
    while(!(cin >> num) || num < CHOICE_1 || num > CHOICE_3)
    {
        // Explain error
        cout << "\n\t\tError: You must choose either 1, 2, or 3. ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(1200, '\n');
    }
    return num;
}
