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

int main()
{
    // Input Stream Objects
    ifstream inputAuthors,     // For Authors.txt
             inputBooks,    // For Books.txt
             inputDates;     // For Date.txt

    // Output Stream Objects
    ofstream outputFile;    // Output Stream Object

    // Constants
    const int SIZE = 3;

    // Variables
    string author[SIZE],   // Holds author names
           book[SIZE],     // Holds book names
           date[SIZE];     // Holds book dates

    // Open input files
    inputAuthors.open("Authors.txt");
    inputBooks.open("Books.txt");
    inputDates.open("Date.txt");


    cout << "Here are books that are available" << endl
         << "in the sheet music genre:\n" << endl;

    // Receive and display array contents
    for (int count = 0; count < SIZE; count++)
    {
        getline(inputAuthors, author[count]);
        getline(inputBooks, book[count]);
        getline(inputDates, date[count]);
        cout << (count + 1) << ". "
             << author[count] << ", " << endl
             << book[count] << ", " << endl
             << date[count] << endl << endl;
    }

    // Close inputFile
    inputAuthors.close();
    inputBooks.close();
    inputDates.close();

    // Ask user to choose book
    int chooseBook; // holds book choice
    cout << "Choose a book that you would like to read: ";
    cin >> chooseBook;

    cout << "You chosen book " << chooseBook << '\n' << endl
         << author[(chooseBook - 1)] << ", " << endl
         << book[(chooseBook - 1)] << ", " << endl
         << date[(chooseBook -1)] << endl << endl;

    char isThisCorrect; // Hold (Y/N) answer
    cout << "Is this correct? ";
    cin >> isThisCorrect;

    return 0;
}
