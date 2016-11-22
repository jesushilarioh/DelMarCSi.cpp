//*********************************************************
// This function is sent from a switch statement
// The menu selection is sheet music case 1
// Display Author, Book, and date. Save file as csv
//
// By: Jesus Hilario Hernandez
// Last Updated: November 8, 2016
//*********************************************************
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

// Directives for clearing the screen
#ifdef _WIN32
char buffer[4] = "cls";
const char* clearVar = buffer;
#ifdef _WIN64
char buffer[4] = "cls";
const char* clearVar = buffer;
#endif
#else
char buffer[6] = "clear";
const char* clearVar = buffer;
#endif

//Function Prototypes
void clearScreen();

// Main Function
int main()
{
    // Input Stream Objects
    ifstream inputAuthors,     // For Authors.txt
             inputBooks,       // For Books.txt
             inputDates;       // For Date.txt

    // Output Stream Objects
    ofstream keptBooks;    // Output Stream Object

    // Constants
    const int SIZE = 3,
              SELECT_BOOK_1 = 0,
              SELECT_BOOK_2 = 1,
              SELECT_BOOK_3 = 2;

    // Variables
    string author[SIZE],    // Holds author names
           book[SIZE],      // Holds book names
           date[SIZE];      // Holds book dates
    int selectBook;
    char keepBook, anotherSelection;

    // Selecting Books from a list
    do                                                              // main Do While Loop
    {
        // Open input files
        inputAuthors.open("Authors.txt");
        inputBooks.open("Books.txt");
        inputDates.open("Date.txt");

        clearScreen();
        // Display list of music books
        cout << "Here are the available music books: \n" << endl;
        // Receive contents of each array from a file
        for (int count = 0; count < SIZE; count++)
        {
            getline(inputAuthors, author[count]);
            getline(inputBooks, book[count]);
            getline(inputDates, date[count]);
            cout << '\t' << (count + 1) << ". "
                 << author[count] << ", " << endl
                 << "\t\t" << book[count] << ", " << endl
                 << "\t\t" << date[count] << endl << endl;
        }

        cout << "Select a book: ";
        cin >> selectBook;

        switch (selectBook)
        {
            case (SELECT_BOOK_1 + 1):
                clearScreen();
                cout << "\nYou've selected:" << endl
                     << book[SELECT_BOOK_1] << ", by "
                     << author[SELECT_BOOK_1] << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                break;
            case (SELECT_BOOK_2 + 1):
                clearScreen();
                cout << "\nYou've selected:" << endl
                     << book[SELECT_BOOK_2] << ", by "
                     << author[SELECT_BOOK_2] << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                break;
            case (SELECT_BOOK_3 + 1):
                clearScreen();
                cout << "\nYou've selected:" << endl
                     << book[SELECT_BOOK_3] << ", by "
                     << author[SELECT_BOOK_3] << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                break;
            default:
                cout << "NO WORK." << endl;
        }

        // If no. Say ok.
        if (keepBook == 'N' || keepBook == 'n')
        {
            cout << "Ok." << endl;
        }
        // If yes. Say awesome!
        else if (keepBook == 'y' || keepBook == 'Y')
        {
            cout << "Awesome!\n";
        }

        // Ask if would like to make another music selection
        cout << "Would you like to make another music genre selection?";
        cin >> anotherSelection;

    } while(anotherSelection == 'y' || anotherSelection == 'Y');        // End main Do While loop


    // Close inputFiles
    inputAuthors.close();
    inputBooks.close();
    inputDates.close();

    return 0;
}

//***************************************************
// function to clear screen, using variable         *
// created in PPD statement                         *
//***************************************************
void clearScreen()
{
    system(clearVar);
}
