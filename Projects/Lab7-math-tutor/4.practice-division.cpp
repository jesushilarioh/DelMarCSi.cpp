//**************************************
// 3. Practice Division
//
// By: Jesus HIlario Hernandez
// Last updated: Octobe 31, 2016
//**************************************
#include <iostream>
#include <cstdlib>      // For rand and srand
#include <ctime>        // For the time function
using namespace std;

int main()
{
    // Get the system time.
    unsigned seed = time(0);

    // Seed the random number generator.
    srand(seed);

    const int MIN_VALUE = 0;    // Minimum value
    const int MAX_VALUE = 9;    // Maximum value

    // Variables
    double num1;    // Holds a value
    double num2;    // Holds a value
    double sum, answer;
    char enterKey;

    num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    sum = num1 / num2;

    cout << num1 << " / " << num2 << endl;
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

    cout << endl;
    return 0;
}
