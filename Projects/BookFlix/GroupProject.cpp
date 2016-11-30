#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
//#include <windows.h>
#include <cstdlib>      //for rand and srand
#include <ctime>        // for the time
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
void Romance();             // Romance Genre
void RomanceDes();          // Romance Discriptions
void Adventure();           // Adventure Genre
void Mystery();             // Mystery Genre
void Music();               // Music Genre
void clearScreen();         // Mystery Genre
char errorCheckYorN(char);  // Error Check for Y or N.

int main()
{
    // Variables
    int menu_choice;    // Holds Menu Choice
    char repeat_menu;   // To Re-display the menu_choice

        // Clear Screen
        clearScreen();
        cout << "This program allows you to find a book you would like to read\n";
        cout << "based on which genre you would prefer to read." << endl;

        do
        {

        cout << "\nChoose a genre from the list below\n" << endl;
        cout << "\n1. Music " << endl;
        cout << "\n2. Romance" << endl;
        cout << "\n3. Adventure" << endl;
        cout << "\n4. Mystery\n" << endl;

        // Receive into menu_choice
        // Error check for input validation
        while (!(cin >> menu_choice) || (menu_choice < 1 || menu_choice > 4))   // Error Check for valid input
        {
            // Describe error
            cout << "ERROR: you must choose a number from 1 to 10.";
            // Clear input stream
            cin.clear();
            // Discard previous input
            cin.ignore(123, '\n');
        }

        switch (menu_choice)
            {

            // 1. Music Genre
            case 1:
                Music();
                break;

            // 2. Romance Genre
            case 2:
                cout << "You have chosen romance as your genre." << endl;
                Romance();
                break;

            // 3. Adventure Genre
            case 3:
                Adventure();
                break;

            // 4. Mystery Genre
            case 4:
                Mystery();
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

//***************************************************
// function errorCheckYN check for valid input.     *
// In this case the user must enter a Y or and N.   *
//***************************************************
char errorCheckYorN(char letter)
{
    while (!(letter == 'y' || letter == 'Y' || letter == 'n' || letter == 'N'))
        {
            // Explain error
            cout << "ERROR: you must choose either Y or N." << endl
                 << "Y for Yes or\n"
                 << "N for No...";
            // Clear input stream
            cin.clear();
            // Discard previous input
            cin.ignore(123, '\n');
            // Receive input again
            cin >> letter;
        }
        return letter;
}

//***************************************************
// function to clear screen, using variable         *
// created in PPD statement                         *
//***************************************************
void clearScreen()
{
    system(clearVar);
}

//***************************************************
// Romance Function.                                *
//***************************************************
void Romance()
{
    int SIZE = 1024;
    int position = 0;
    char * array = new char [SIZE];

    ifstream file("RomanceBooksAshley.txt");


    if(file.is_open())
    {
        cout << "File opened" << endl << endl;
        cout << "Author              Title        Date" << endl;

        while (!file.eof() && position < SIZE)
        {
            file.get(array[position]);
            position++;
        }
        array [position-1] = '\0';

        for (int i = 0; array[i] != '\0'; i++)
        {

            cout << array[i];

        }

    }
    else
    {
    cout << "File could not be opened." << endl;
    }
file.close();

RomanceDes();
}

//***************************************************
// RomanceDes Function.                             *
//***************************************************

void RomanceDes()
{
    char repeat_romancemenu;
    int menu_romancechoice;
     do
        {
            cout << endl << "Chose a book to read the description" << endl << endl;

            cin >> menu_romancechoice;
            cout << endl;

            switch(menu_romancechoice)
            {
            case 1:
                {
                cout << "Would you risk it all to change your destiny?" << endl << endl;

                cout << "The last thing Kelsey Hayes thought she'd be doing" << endl
                << "this summer was trying to" << endl
                << "break a 300-year old Indian curse." << endl
                << "With a mysterious white tiger named Ren." << endl
                << "Halfway around the world." << endl
                << "But that's exactly what happened." << endl << endl;

                cout << "Face-to-face with dark forces, spellbinding magic,"<< endl
                << "and mystical worlds where nothing is what it seems," << endl
                << "Kelsey risks everything to piece together an ancient prophecy" << endl
                << "that could break the curse forever." << endl
                << "Packed with magic, action-adventure, and romance," << endl
                << "the epic Tiger's Curse series will keep you breathless" << endl
                << "and yearning for more." << endl;

                }
                break;
            case 2:
                {
                cout << "Back in Oregon, Kelsey tries to pick up the pieces of her life" << endl
                << "and push aside her feelings for Ren." << endl
                << "Kelsey Hayes's eighteenth summer was crazy." << endl
                << "The kind of crazy nobody would ever believe." << endl;

                cout << "Aside From battling immortal sea monkeys and" << endl
                << "trekking the jungles of India, she fell in love with Ren," << endl
                << "a 300-year-old prince." << endl;

                cout << "When danger suddenly forces Kelsey on another Indian quest," << endl
                << "with Ren's bad-boy brother, Kishan," << endl
                << "the unlikely duo begins to question their true destiny." << endl
                << "Ren's life hangs in the balance--so does the truth within Kelsey's heart." << endl;

                }
                break;
            case 3:
                {
                cout << "Galen, a Syrena prince, searches land for a girl he's heard can communicate with fish." << endl
                << "It's while Emma is on vacation at the beach that she meets Galen." << endl
                << "Although their connection is immediate and powerful," << endl
                << "Galen's not fully convinced that Emma's the one he's been looking for." << endl
                << "That is, until a deadly encounter with a shark proves that Emma" << endl
                << "and her Gift may be the only thing that can save his kingdom." << endl
                << "He needs her help�no matter what the risk." << endl;

                }
                break;
            case 4:
                {
                cout << "Emma has just learned that her mother is a long-lost Poseidon princess," << endl
                << "and now struggles with an identity crisis:" << endl
                << "As a Half-Breed, she's a freak in the human world and an abomination" <<endl
                << "in the Syrena realm. Syrena law states all Half-Breeds should be put to death." << endl;

                cout << "As if that's not bad enough, her mother's reappearance in the Syrena world" << endl
                << "turns the two kingdoms�Poseidon and Triton�against one another." << endl
                << "Which leaves Emma with a decision to make:" << endl
                << "Should she comply with Galen's request to keep herself safe and" << endl
                << "just hope for the best? Or should she risk it all and reveal herself�and" << endl
                << "her Gift�to save a people she's never known?" << endl;

                }
                break;
            default:
                {
                    cout << "Invalid answer. Please try again." << endl;
                }
                break;

            }
            cout << endl << "Would you like to return to the Romance menu? (Y/N)" << endl;

            cin >> repeat_romancemenu;
        }
            while (repeat_romancemenu == 'Y' || repeat_romancemenu == 'y');
}


//***************************************************
// Adventure Function.                              *
//***************************************************

void Adventure()
{
    cout << "\nHere's a list of 3 Adventure books you'd might like to read.\n" << endl;
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

    inFile.open ("AdventureBooksRegean.csv");       //open the file

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

//***************************************************
// Mystery Function.                                *
//***************************************************

void Mystery()
{
    cout << "\nHere's a list of  3 Mystery books you'd might like to read.\n" << endl;
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

    inFile.open ("MysteryBooksRegean.csv");       //open the file

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

//***********************************************************
// The Music function displays a list of music books for    *
// the user to choose from. The user will be asked if they  *
// would like to keep the book they've selected. If yes,    *
// The book information will be written to an external file.*
// Then, the user will be asked if they would like to make  *
// another music selection. If yes, the program will display*
// the menu again. If no, the program will then exit this   *
// function.                                                *
//***********************************************************
void Music()
{
    // Input Stream Objects
    ifstream inputAuthors,      // For Authors.txt
             inputBooks,        // For Books.txt
             inputDates,        // For Date.txt
             inputDiscription;  // For Discription.txt

    // Output Stream Objects
    ofstream keptBooks;         // Output Stream Object

    // Constants
    const int SIZE = 10,
              SELECT_BOOK_1  = 0,
              SELECT_BOOK_2  = 1,
              SELECT_BOOK_3  = 2,
              SELECT_BOOK_4  = 3,
              SELECT_BOOK_5  = 4,
              SELECT_BOOK_6  = 5,
              SELECT_BOOK_7  = 6,
              SELECT_BOOK_8  = 7,
              SELECT_BOOK_9  = 8,
              SELECT_BOOK_10 = 9;

    // Variables
    string author[SIZE],        // Holds author names
           book[SIZE],          // Holds book names
           date[SIZE],          // Holds book dates
           discription[SIZE];   // Holds book discriptions

    int selectBook;             // Holds book selection
    char keepBook,              // Holds Y or N
         anotherSelection;      // Holds Y or N to return to music menu or not

    // Open input/ouput files
    inputAuthors.open("Authors.txt");
    inputBooks.open("Books.txt");
    inputDates.open("Date.txt");
    inputDiscription.open("Discriptions.txt");
    keptBooks.open("RememberedBooks.txt", ios::out | ios::app);


    // Select Book from a list
    do
    {

        clearScreen();
        // Display list of music books
        cout << "Here are the available music books: \n" << endl;
        // Fill arrays with external file data and display contents
        for (int count = 0; count < SIZE; count++)
        {
            getline(inputAuthors, author[count]);
            getline(inputBooks, book[count]);
            getline(inputDates, date[count]);
            getline(inputDiscription, discription[count]);
            cout << '\t' << (count + 1) << ". "
                         << book[count] << ", " << endl;
        }

        // Close inputFiles
        inputAuthors.close();
        inputBooks.close();
        inputDates.close();
        inputDiscription.close();

        // Ask your to select a book
        cout << "Select a book: ";

        // Receive into selectBook variable
        // Error check for input validation
        while (!(cin >> selectBook) || (selectBook < 1 || selectBook > 10))   // Error Check for valid input
        {
            // Describe error
            cout << "ERROR: you must choose a number between 1 and 10.";
            // Clear input stream
            cin.clear();
            // Discard previous input
            cin.ignore(123, '\n');
        }

        switch (selectBook)
        {
            case (SELECT_BOOK_1 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_1] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_1] << endl << endl
                     << "    "  << discription[SELECT_BOOK_1]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_2 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_2] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_2] << endl << endl
                     << "    "  << discription[SELECT_BOOK_2]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_3 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_3] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_3] << endl << endl
                     << "    "  << discription[SELECT_BOOK_3]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_4 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_4] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_4] << endl << endl
                     << "    "  << discription[SELECT_BOOK_4]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_5 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_5] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_5] << endl << endl
                     << "    "  << discription[SELECT_BOOK_5]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_6 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_6] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_6] << endl << endl
                     << "    "  << discription[SELECT_BOOK_6]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_7 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_7] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_7] << endl << endl
                     << "    "  << discription[SELECT_BOOK_7]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_8 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_8] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_8] << endl << endl
                     << "    "  << discription[SELECT_BOOK_8]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_9 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_9] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_9] << endl << endl
                     << "    "  << discription[SELECT_BOOK_9]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_10 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_10] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_10] << endl << endl
                     << "    "  << discription[SELECT_BOOK_10]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            default:
                cout << "NO WORK." << endl;
        }

        // If no. Say ok.
        if (keepBook == 'N' || keepBook == 'n')
        {
            cout << "Ok.\n" << endl;
        }
        // If yes. Say awesome!
        else if (keepBook == 'y' || keepBook == 'Y')
        {
            cout << "Awesome!\n" << endl;
            // Write to output file books kept by user
            keptBooks << book[selectBook - 1] << ", "
                      << author[selectBook -1] << ", "
                      << date [selectBook -1] << endl;
        }

        // Ask if would like to make another music selection
        cout << "Would you like to make another "
             << "music genre selection? (Y/N)";
        anotherSelection = errorCheckYorN(anotherSelection);

    } while(anotherSelection == 'y' || anotherSelection == 'Y');// End Do While

    //Close output File
    keptBooks.close();
}
