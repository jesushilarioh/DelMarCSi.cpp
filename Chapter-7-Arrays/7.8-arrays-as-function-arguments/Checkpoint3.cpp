#include <iostream>
using namespace std;

int main()
{
    double array1[4] = {1.2, 3.2, 4.2, 5.2};
    double array2[4] = {7.8, 6.7, 8.2, 5.2};

    for (int count = 0; count < 4; count++)
    {
        array1[count] = array2[count];
        cout << "array1 subscript " << count << " is: "
             << array1[count] << endl;
        cout << "array2 subscript " << count << " is: "
             << array2[count] << endl;
    }

    cout << "\nThis is what array1 looks like: ";
    for(double count : array1)
    {
        cout << count << " ";
    }

    cout << "\nThis is what array2 looks like: ";
    for(double count : array2)
    {
        cout << count << " ";
    }
    cout << endl << endl;
    return 0;
}
