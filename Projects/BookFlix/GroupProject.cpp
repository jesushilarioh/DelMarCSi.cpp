#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
//#include <windows.h>
#include <cstdlib>      //for rand and srand
#include <ctime>        // for the time
using namespace std;


int menu_choice;        //declare vaiables
char repeat_menu;

void Romance();        //function pretotypes
void Fantasy();


int main()
{

        cout << "This program allows you to find a book you would like to read\n";
        cout << "based on which genre you would prefer to read." << endl;

        do
        {

        cout << "\nChoose a genre from the list below\n" << endl;

        cout << "\n1. Sheet Music " << endl;
        cout << "\n2. Romance" << endl;
        cout << "\n3. Adventure\n" << endl;

        cin >> menu_choice;

        while (menu_choice != 1 && menu_choice != 2 && menu_choice != 3)
        {
            cout << "\nError! Please enter a number from the choices above." << endl;
            cin >> menu_choice;
        }

        switch (menu_choice)
            {

            case 1:
                {

                }
                break;

            case 2:
            {

            cout << "You have chosen romance as your genre." << endl;
            Romance();

            }
            break;

            case 3:
                {
                    Fantasy();
                }
                break;

            default:
            break;

            }

            cout << "\nWould you like to return to the main menu? (Y/N)" << endl;

            cin >> repeat_menu;

        } while (repeat_menu == 'Y' || repeat_menu == 'y');

        cout << "\nHave a nice day!" << endl;
return 0;
}

void Romance()
{

}

void Fantasy()
{
    cout << "\nHere's a list of  3 Adventure books you'd might like to read.\n" << endl;
    //Sleep (1000);

    fstream inFile;
    const int SIZE = 10;        //array size
    const int min_value = 0;    //min random value
    const int max_value = 5;    //max random value

    string book[SIZE];          //declare arrays
    string author[SIZE];
    string date[SIZE];

    int count = 0;
    int num = 1;
    int RNG;        //for random generator

    inFile.open ("Booklist2.csv");       //open the file

         if (inFile.fail())             //if file did not open
        {
            cout << "Error! Could not open file." << endl;
        }
    if (inFile)
    {

        while (getline (inFile, book[count], ','))
        {
            getline (inFile, author[count], ',');
            getline (inFile, date[count], '\n');
            count++;
        }

        cout << "Title" << "\t\t" << setw(25) << "Author" << "\t" << setw(14) << "Date\n" << endl;

        for (int numloop = 0; numloop < 3; numloop++)
        {
            //get the system time
            unsigned seed = time(0);
            //seed the random num generator
            srand(seed);

            RNG = (rand() % (max_value - min_value + 1)) + min_value;
            cout << num << ". " << book[RNG] << setw(25) << right << author[RNG] << setw(10) << right << date[RNG] << endl << endl;
            num++;


            //Sleep (1000);
        }
    }


    inFile.close();     //close the file

}
