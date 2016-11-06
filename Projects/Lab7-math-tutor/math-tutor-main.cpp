//******************************************************************
//
// JESUS HILARIO HERNANDEZ
// Course: COSC 1436.001 Programming Fundamentals 1
// Lab # 7 Math Tutor
// Due Date: November 6, 2016
// Instructor: Korinne Caruso
//
// PURPOSE: This program functions as a math tutor to students in
// the elementary - middle school range. This program will have
// a menu selection to choose from that will include: addition
// practice, subtraction practice, multiplication practice, division
// practice, calculating the area of a triangle, the area of a circle,
// and the area of a rectangle.
//
// INPUT: Input for calculating the area selections will require the
// user to input information through the cin object. Input will then
// be checked to be sure that valid data is input at the keyboard.
//
// OUTPUT: For the practice selctions, random numbers will be
// displayed, answered, and sent to an exeternal file. For the
// calculation selections the area of an object will be calculated,
// displayed, and then sent to an external file.
//
//******************************************************************
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>      // For rand and srand
#include <ctime>        // For the time function
using namespace std;

// Global Constants used fo menu selection.
const int CHOICE_1 = 1,
          CHOICE_2 = 2,
          CHOICE_3 = 3,
          CHOICE_4 = 4,
          CHOICE_5 = 5,
          CHOICE_6 = 6,
          CHOICE_7 = 7,
          CHOICE_8 = 8;

// Function Prototypes
bool inputVal(bool);
int menu(int);
bool additionPrac();

int main()
{
    // Get the system time.
    unsigned seed = time(0);

    // Seed the random number generator.
    srand(seed);

    const string SHUTDOWN = "CarusoShutDown";
    int menuSelection;
    string teacherPass;

    do
    {
        // Display Menu, receive user input
        menuSelection = menu(menuSelection);

        cout << endl << endl;

        switch (menuSelection)
        {
            case CHOICE_1:
                additionPrac();
                break;
            case CHOICE_2:
                cout << "You've chosen 2. " << endl;
                break;
            case CHOICE_3:
                cout << "You've chosen 3. " << endl;
                break;
            case CHOICE_4:
                cout << "You've chosen 4. " << endl;
                break;
            case CHOICE_5:
                cout << "You've chosen 5. " << endl;
                break;
            case CHOICE_6:
                cout << "You've chosen 6. " << endl;
                break;
            case CHOICE_7:
                cout << "You've chosen 7. " << endl;
                break;
            case CHOICE_8:
                cout << "Password please: ";
                cin >> teacherPass;

                if (teacherPass != SHUTDOWN)
                {
                    int tries = 4;
                    for (int num = 0; num < 4; num++)
                    {
                        cout << "I'm sorry wrong password." << endl
                             << "You have " << tries << " more tries: ";
                        cin >> teacherPass;
                        tries--;
                        if (teacherPass == SHUTDOWN)
                        {
                            break;
                        }
                    }
                }
        }
    } while (!(teacherPass == SHUTDOWN));

    cout << "Ending Program...\n";
    cout << "Program ended." << endl << endl;
    return 0;
}

//*******************************************************
// The inputVal Function check for valid input. In      *
// this case a boolean must be enter as valid input.    *
// The user will be promted to enter valid data if      *
// they've entered invalid data.                        *
//*******************************************************

bool inputVal(bool num)
{
    while (!(cin >> num))
    {
        cout << "I'm sorry either a 1 or a 0 must be enter to proceed: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}

//*******************************************************************
// Function menu displays the main menu, receives user selection,   *
// and checks for valid input.                                      *
//*******************************************************************

int menu(int num)
{
    cout << "\t-----------------------------------------------------\n"
         << "\t\t\tWelcome to Math Tutor!\n"
         << "\t-----------------------------------------------------\n\n"
         << "\tChoose from the menu to continue: \n\n"
         << "\t\t1. Practice Addition \n"
         << "\t\t2. Practice Subtraction \n"
         << "\t\t3. Practice Multiplication\n"
         << "\t\t4. Practice Division\n"
         << "\t\t5. Calculate the Area of a Rectangle\n"
         << "\t\t6. Calculate the Area of a Circle\n"
         << "\t\t7. Calculate the Area of a Triangle\n"
         << "\t\t8. Program Shutdown ";

    while (!(cin >> num && num <= CHOICE_8 && num >= CHOICE_1))
    {
        cout << "I'm sorry, choose a number from the menu: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}

bool additionPrac()
{
    bool anotherProb;
    do
    {
        // Variables
        int num1;                   // Holds a value
        int num2;                   // Holds a value
        int sum, answer;
        char enterKey;

        const int MIN_VALUE = 0;    // Minimum value
        const int MAX_VALUE = 9;    // Maximum value

        num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        sum = num1 + num2;

        cout << num1 << " + " << num2 << endl;
        cout << "\nPress [enter] to see the answer...";
        cin.clear();
        cin.ignore(123, '\n');
        cin.get();
        cout << "\nThe answer is " << sum << endl << endl;
        do
        {
            cout << "Problem: " << endl;
            cout << "\tIf I have " << num1 ;

            if (num1 == 1)
            {
                cout << " pencil";
            }
            else
            {
                cout << " pencils";
            }
            cout << " and " << num2;

            if (num2 == 1)
            {
                cout << " pen";
            }
            else
            {
                cout << " pens";
            }
            cout << endl
                 << "\thow many pens and pencils do I have altogether? ";
            cin >> answer;
            if (answer == sum)
            {
                cout << "\nGreat work! " << endl;
            }
            else
            {
                cout << "\nSorry, try again.\n" << endl;
            }

        } while (answer != sum);

            cout << "Press 1 to get another problem\n"
                 << "or 0 to return to the main menu ";
            anotherProb = inputVal(anotherProb);
            cout << endl;

    } while (anotherProb == true);
    return anotherProb;
}
