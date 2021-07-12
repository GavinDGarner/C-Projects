//Gavin Garner CS 317
//Sum of Digits
// This program will discover what numbers are also the sum of their digits cubed

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("Result.out");

    int N = 0;
    int index = 100;
    int ones = 0, tens = 0, hundreds = 0;


    cout << "This program shows all integers whose digits when cubed and added together are equal to the original integer.\n" << endl;
    outfile << "This program shows all integers whose digits when cubed and added together are equal to the original integer.\n" << endl;

    while (index <= 450)
    {
        N = index;
        ones = N % 10;
        N = N / 10;
        tens = N % 10;
        hundreds = N / 10;


        if (((pow (ones, 3.0))+(pow (tens, 3.0))+(pow (hundreds, 3.0))) == index)
        {
            cout << index << endl;
            outfile << index << endl;
        }

        index += 1;
    }

    outfile.close();
    return 0;
}
