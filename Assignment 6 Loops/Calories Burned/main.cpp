//Gavin Garner CS 317
//Calories Burned
// This program will determine the calorie burn from running on a particular treadmill.

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ofstream outfile;
        outfile.open("Result.out");

    float burnCal = 3.6; // calories burned per min
    int minute = 0;

    cout << "This treadmill burns " << burnCal << " calories per minute.\n" << endl;
    outfile << "This treadmill burns " << burnCal << " calories per minute.\n" << endl;

    while (minute < 30)
    {
     minute += 5;
     cout << "After " << setw(3) << minute << " minutes, will burn " << setw(4) << burnCal * minute << " calories." << endl;
     outfile << "After " << setw(3) << minute << " minutes, will burn " << setw(4) << burnCal * minute << " calories." << endl;
    }

    outfile.close();
    return 0;
}
