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

int main()
{
    const string SHUTDOWN = "CarusoShutDown";
    int menuSelection;
    string teacherPass;


    do
    {
        cout << "What is you selection? ";
        cin >> menuSelection;

        switch (menuSelection)
        {
            case CHOICE_1:
                cout << "You've chosen 1. " << endl;
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

    cout << "Shutting down...\n";
    cout << "Program ended." << endl << endl;
    return 0;
}
