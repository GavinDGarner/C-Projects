//Gavin Garner CS 317
//Sequence of Digits
// This program will discover what 4-digit numbers are sequential i.e. 1234

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("Result.out");

    int N = 0;
    int index = 0; // range 0-9999
    int ones = 0, tens = 0, hundreds = 0, thousands = 0;

    cout << "This program will discover what 4-digit numbers are sequential i.e. 1234\n\n";
    outfile << "This program will discover what 4-digit numbers are sequential i.e. 1234\n\n";



    while (index <= 9999)
    {
        N = index;
        ones = N % 10;
        N = N / 10;
        tens = N % 10;
        N = N / 10;
        hundreds = N % 10;
        thousands = N / 10;

        if (hundreds == (thousands + 1) && tens == (hundreds + 1) && ones == (tens + 1))
        {
                if (index == 123)
                {
                    cout << "0123" << endl;
                    outfile << "0123" << endl;
                }
                    else
                    {
                    cout << index << endl;
                    outfile << index << endl;
                    }
        }
        index += 1;
    }

    outfile.close();
    return 0;
}
