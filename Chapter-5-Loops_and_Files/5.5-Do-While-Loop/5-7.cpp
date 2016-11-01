//***********************************************************
// This program averages 3 test scores. It repeats as many
// times as the user wishes.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 31, 2016
//***********************************************************
#include <iostream>
using namespace std;

int inputVal(int);              // Input Vlaidation (int)
char inputVal(char);            // Input Validation (char)

int main()
{
    int score1, score2, score3; // Three scores
    double average;             // Average scores
    char again;                 // To hold Y or N input

    do
    {
        // Get three scores.
        cout << "Enter 3 scores and I will average them: " << endl;
        cout << "Score 1: ";
        score1 = inputVal(score1);
        cout << "Score 2: ";
        score2 = inputVal(score2);
        cout << "Score 3: ";
        score3 = inputVal(score3);

        // Calculate and display the average.
        average = (score1 + score2 + score3) / 3.0;
        cout << "The average is " << average << ".\n";

        // Does the user want to average anoterh set?
        cout << "Do you want to average another set? (Y/N)";
        again = inputVal(again);
    } while (again == 'Y' || again == 'y');
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

//***********************************************
// The errorChecking3() function is used to     *
// check if the user has entered either a Y or  *
// an N. Failure on the users part to enter     *
// either will result in a prompt that will     *
// receive valid input.                         *
//***********************************************

char inputVal(char letter)
{
    while(!(letter == 'y' || letter == 'Y' || letter == 'n' || letter == 'N'))
    {
        cout << "Error: choose either Y or N.";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(1200, '\n');
        // Re-enter input
        cin >> letter;
    }
    return letter;
}
