//Gavin Garner CS 317
//Penny a Day
//This program will calculate doubling a paycheck everyday starting at $0.01

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("Result.out");
    float pay = 0.01, totalPay =0.00;
    int index = 0;

    cout << "You will earn double your pay everyday starting at $0.01.\n" << endl;
    cout << setprecision(2) << fixed;
    outfile << "You will earn double your pay everyday starting at $0.01.\n" << endl;
    outfile << setprecision(2) << fixed;

    while (index <= 30)
    {
        cout << "day"<< setw(4) << index << ": $" << pay << endl;
        outfile << "day"<< setw(4) << index << ": $" << pay << endl;

        pay = pay * 2.0;
        totalPay = totalPay + pay;
        index += 1;
    }

    cout << "\nTotal Pay: $" << totalPay;
    outfile << "\nTotal Pay: $" << totalPay;

    outfile.close();
    return 0;
}
