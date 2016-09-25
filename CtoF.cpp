//This calculates for the user celsius to fahrenheit.
//Written by: JESUS HILARIO HERNANDEZ
//Last modified: Sept. 23, 2016

#include<iostream>
#include<iomanip>
using namespace std;

double C; // Celsius Variable
double F; // Fahrenheit Variable
char ans;

int main()
{


    //discribe to the user what the program does.
    cout << "This program converts celsius to fahrenheit. Would you like to continue? (Y/N) ";
    cin >> ans;


    //if statement for whether user chooses yes or no.
    if (ans == 'y'|| ans == 'Y'){

        cout << "\nOk. What is your celsius temperature? ";

        //receiving celsius temp.
        cin >> C;

        //Formatting setprecision if decimal answer occurs
        cout << setprecision(5);

        // calculating celsius to fahrenheit.
        F = 1.8 * C + 32;

        // Displaying conversion from C to F.
        cout << endl << C << "°C" << " = " << F << "°F" << endl << endl;

    //else if resonds to no answer
    } else if(ans == 'n' || ans == 'N'){
        cout << "\nSorry I couldn't help.\n" << endl;

    //Else occurs when any key other than Y or N pressed
    } else {
        cout << "\nTry pressing either Y or N next time." << endl << endl;
    }




    return 0;
}
