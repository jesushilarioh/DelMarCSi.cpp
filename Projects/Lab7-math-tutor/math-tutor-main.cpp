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
bool additionPractice();
bool subtractionPractice();
bool multiplicationPractice();
bool divisionPractice();
bool calculateAreaOfRectangle();
bool calculateAreaOfCircle();

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
                additionPractice();
                break;
            case CHOICE_2:
                subtractionPractice();
                break;
            case CHOICE_3:
                multiplicationPractice();
                break;
            case CHOICE_4:
                divisionPractice();
                break;
            case CHOICE_5:
                calculateAreaOfRectangle();
                break;
            case CHOICE_6:
                calculateAreaOfCircle();
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

//***************************************************************
// The additionPractice function shows a random addition        *
// problem, asks for user input, and returns a boolean value.   *
//***************************************************************

bool additionPractice()
{
    bool anotherProb;
    do
    {

        const int MIN_VALUE = 0;    // Minimum value
        const int MAX_VALUE = 9;    // Maximum value

        // Variables
        int num1;                   // Holds a value
        int num2;                   // Holds a value
        int sum, answer;

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

//***************************************************************
// The subtractionPractice function shows a random subtraction  *
// problem, asks for user input, and returns a boolean value.   *
//***************************************************************

bool subtractionPractice()
{
    bool anotherProb;
    do
    {
        const int MIN_VALUE = 0;    // Minimum value
        const int MAX_VALUE = 9;    // Maximum value

        // Variables
        int num1;    // Holds a value
        int num2;    // Holds a value
        int sum, answer;

        num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        sum = num1 - num2;

        cout << num1 << " - " << num2 << endl;
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

//***************************************************************
// The multiplicationPractice function shows a random           *
// multiplication problem, asks for user input, and returns a   *
// boolean value.                                               *
//***************************************************************

bool multiplicationPractice()
{
    bool anotherProb;
    do
    {
        const int MIN_VALUE = 0;    // Minimum value
        const int MAX_VALUE = 9;    // Maximum value

        // Variables
        int num1;    // Holds a value
        int num2;    // Holds a value
        int sum, answer;
        char enterKey;

        num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        sum = num1 * num2;

        cout << num1 << " x " << num2 << endl;
        cout << "\nPress [enter] to see the answer...";
        cin.get(enterKey);
        cout << "\nThe answer is " << sum << endl << endl;
        do
        {
            cout << "Problem: " << endl;
            cout << "\tIf I have " << num1 << " sets of "
            << num2 << " swans, how many do I have "
            << "altogether? ";
            cin >> answer;
        } while (answer != sum);

        cout << "Press 1 to get another problem\n"
             << "or 0 to return to the main menu ";
        anotherProb = inputVal(anotherProb);
        cout << endl;

    } while(anotherProb == true);
    return anotherProb;
}

//***************************************************************
// The divisionPractice function shows a random division        *
// problem, asks for user input, and returns a boolean value.   *
//***************************************************************

bool divisionPractice()
{
    bool anotherProb;

    do
    {
        const int MIN_VALUE = 1;    // Minimum value
        const int MAX_VALUE = 9;    // Maximum value

        // Variables
        int num1;    // Holds a value
        int num2;    // Holds a value
        int sum, answer;

        cout << fixed << showpoint << setprecision(2);
        num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        sum = num1 / num2;

        cout << num1 << " / " << num2 << endl;
        cout << "\nPress [enter] to see the answer...";

        cin.clear();
        cin.ignore(123, '\n');
        cin.get();

        cout << "\nThe answer is " << sum << " with a remainder of " << (num1 % num2)
             << endl << endl;
        do
        {
            cout << "Problem: " << endl;
            cout << "\tIf I have " << num1 << " sets of "
            << num2 << " swans, how many do I have "
            << "altogether? ";
            cin >> answer;
        } while (answer != sum);

        cout << "Press 1 to get another problem\n"
             << "or 0 to return to the main menu ";
        anotherProb = inputVal(anotherProb);
        cout << endl;

    } while(anotherProb == true);

    return anotherProb;
}

//***************************************************************
// The calculateAreaOfRectangle function receives the length and*
// width from the user, calculates the area of a rectangle, and *
// prints that calculation to screen.                           *
//***************************************************************

bool calculateAreaOfRectangle()
{
    bool anotherCal;
    do
    {
        // Variables: Hold length, width, and area.
        double area, length, width;

        // Explain program, then get length
        cout << "This program calculates the area "
             << "of a rectangle." << endl;
        cout << "Let's start off with the length.\n"
             << "What is the length of the rectangle? ";
        cin >> length;

        // Get width
        cout << "Ok, what is the width? ";
        cin >> width;

        // Calculate and display
        area = length * width;
        cout << "The area of a rectangle "
             << "whose length is " << length
             << "\nand whose width is " << width
             << "\nis " << area;

        // Space before return 0
        cout << '\n' << endl;

        cout << "Press 1 to get another problem\n"
             << "or 0 to return to the main menu ";
        anotherCal = inputVal(anotherCal);
        cout << endl;

    } while(anotherCal == true);
    return anotherCal;
}

//*******************************************************************
// The calculateAreaOfCircle function receives the length and width *
// from the user, calculates the area of a rectangle, and prints    *
// that calculation to screen.                                      *
//*******************************************************************

bool calculateAreaOfCircle()
{
    bool anotherCal;
    do
    {
        // Variables: Hold area, radius, PI.
        const double PI = 3.14;
        double area, radius, radSquare;

        // Explain program, then get radius
        cout << "This program calculates the area "
             << "of a circle.\n" << endl;
        cout << "Let's start off with the radius.\n"
             << "What is the radius of the circle? ";
        cin >> radius;
        cout << "\n\t\tAwesome!" << endl << endl;

        // Calculate and display
        radSquare = (radius * radius);
        area = PI * (radius * radius);
        cout << "When finding the area of a circle, \n"
             << "the radius must be squared and then\n"
             << "multiplied by PI(3.14). " << endl;
        cout << "\nSo, " << radius << " x " << radius << " = " << radSquare << endl
             << "and " << radSquare << " x " << PI << " = " << area << "." << endl
             << "The area of the circle is "<< area << endl;
        // Space before return 0
        cout << '\n' << endl;

        cout << "Would you like to calculate the area "
             << "of another circle?\n"
             << "1. Yes\n"
             << "0. Return to main menu ";
        anotherCal = inputVal(anotherCal);
    } while(anotherCal == true);

    return anotherCal;
}
