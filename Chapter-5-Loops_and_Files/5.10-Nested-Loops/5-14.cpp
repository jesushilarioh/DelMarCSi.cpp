//***********************************************************
// This program averages test scores. It asks the user for
// the number of students and the number of test scores per
// student.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 31, 2016
//***********************************************************
#include <iostream>
#include <iomanip>
using namespace std;

int inputVal(int);              // Input Vlaidation (int)
double inputVal(double);        // Input Vlaidation (double)

int main()
{
    int numStudents,    // Number of students
        numTests;       // Number of tests per students
    double total,       // Accumulator for total scores
           average;     // Average test scores

    // Set up numeric output formatting.
    cout << fixed << showpoint << setprecision(1);

    // Get the number of students.
    cout << "This program averages test scores.\n";
    cout << "For how many students do you have scores? ";
    numStudents = inputVal(numStudents);

    // Get the number of test scores per student.
    cout << "How many test scores does each student have? ";
    numTests = inputVal(numTests);

    // Determine each student's average score.
    for (int student = 1; student <= numStudents; student++)
    {
        total = 0;      // Initialize the accumulator.
        for (int test = 1; test <= numTests; test++)
        {
            double score;
            cout << "Enter score " << test << " for ";
            cout << "student " << student << ": ";
            score = inputVal(score);
            total += score;
        }
        average = total / numTests;
        cout << "The average score for student " << student;
        cout << " is " << average << ".\n\n";
    }
    return 0;
}

//***********************************************
// Definition of function inputVal().           *
// This function is used to validate whether    *
// the user has entered a number (int). If no   *
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
// Definition of function inputVal().           *
// This function is used to validate whether    *
// the user has entered a number (double). If no   *
// number is entered at the keyboard, the       *
// while loop will prompt the error and ask     *
// for valid input.                             *
//***********************************************

double inputVal(double num)
{
    while(!(cin >> num))
    {
        cout << "I'm sorry, a number must be entered...";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}
