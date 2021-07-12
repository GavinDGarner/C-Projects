//Gavin Garner CS 317
//How Far Loops
// This program Will calculate the loss in distance covered over time

#include <iostream>
#include <fstream>
#include <iomanip>



using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("Result.out");

    int minutes = 5;
    float TimeLoss = 0.034, TotalDistance = 0.820, Distance5 = 0.820;// original distance after 5 minutes


    cout << setw(8) << right << "Minutes" << "  " << setw(15) << left << "Miles Traveled" << endl;
    outfile << setw(8) << right << "Minutes" << "  " << setw(15) << left << "Miles Traveled" << endl;

    cout << setprecision(3) << fixed;
    outfile << setprecision(3) << fixed;

    while (minutes <= 60)
    {
        cout << setw(8) << right << minutes << "  " << setw(15) << right << TotalDistance << endl;
        outfile << setw(8) << right << minutes << "  " << setw(15) << right << TotalDistance << endl;

        Distance5 = Distance5 - TimeLoss;
        TotalDistance = TotalDistance + Distance5;

        minutes += 5;
    }


    outfile.close();
    return 0;
}
