//Gavin Garner CS 317
// Ocean Levels Loops
// This program will display the projected rise in ocean levels after x amount of years (no user input)

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("Results.out");
    float oceanLVL = 1.5;
    int index = 0, years = 25;
    cout << "Over the next several years, the water level will rise " << oceanLVL << " millimeters per year." << endl;
    outfile << "Over the next several years, the water level will rise " << oceanLVL << " millimeters per year." << endl;

    while (index < years) // years is the amount of years we will count to
    {
        cout << "\nThe water level will rise " << setw(4) << right << oceanLVL << " millimeters after " << setw(3) << right << index + 1 << " years";
        outfile << "\nThe water level will rise " << setw(4) << right << oceanLVL << " millimeters after " << setw(3) << right << index + 1 << " years";
        oceanLVL+= 1.5;
        index+= 1;
    }

    outfile.close();
    return 0;
}
