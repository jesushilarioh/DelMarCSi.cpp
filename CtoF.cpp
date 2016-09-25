//This calculates for the user celsius to fahrenheit.
//Written by: JESUS HILARIO HERNANDEZ
//Last modified: Sept. 24, 2016

#include<iostream>
#include<iomanip>
using namespace std;



int main()
{
    double C; // Celsius Variable
    double F; // Fahrenheit Variable
    char ans; // Answer variable

    //Description of program
    cout << "This program converts celsius to fahrenheit." << endl;
    cout << "Would you like to continue? (Y/N) ";
    cin >> ans;


    //if statement (Y/N) responds to YES
    if (ans == 'y'|| ans == 'Y')
    {

        cout << "\nWhat is your temperature in celsius? ";
        cin >> C;

        // calculates C to F.
        F = 1.8 * C + 32;

        cout << setprecision(5);
        cout << '\n' << C;
        cout << "°C = " << F;
        cout << "°F." << endl << endl;

        //these if/else if statements display type of weather that may occur
        if (F >= 120)
        {
            cout << "Having a cook out?\n" << endl;  //if >= 120
        }
        else if (F >= 70 && F <= 120)
        {
            cout << "Beach weather, ay?\n" << endl;//if between 70 and 120 F
        }
        else if (F >= 60 && F <= 70)
        {
            cout << "Fall is on it's way.\n" << endl;//if between 60 and 70 F
        }
        else if (F >= 50 && F <= 60)
        {
            cout << "Grab a sweater, it's cool out.\n" << endl;//if between 50 and 60 F
        }
        else if (F >= 35 && F <= 50)
        {
            cout << "It's cold out.\n" << endl;//if between 35 and 60 F
        }
        else if (F >= -20 && F <= 35)
        {
            cout << "Stay inside! It's cold out.\n" << endl;//if between -20 and 35 F
        }
        else
        {
            cout << "Traveling to distant planets, are we?\n" << endl;//if lower that -20 F
        }

        //for when a the user does not enter a number
        cout <<"\n\n\nNOTE: \nIF you have pressed somthing other than a number, "<< endl;
        cout << "the computer will read your answer as 0°C.\n" << endl;

    }
    //else if respond to NO
    else if(ans == 'n' || ans == 'N')
            cout << "\nNo? Ok. Have a nice day! \n" << endl;

    //When neither Y nor N are pressed
    else
        cout << "\nOops! Neither Y nor N was pressed!" << endl << endl;




    return 0;
}
