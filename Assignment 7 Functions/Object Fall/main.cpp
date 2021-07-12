//Gavin Garner CS 317
//Object Fall
// THis program will calculate how far an object will fall over time

#include <cmath>
#include <iostream>
#include <iomanip>

void printLabel ();
void printInfo (float T, float D);
float fallingDistance (float T);

using namespace std;

int main()
{
    cout << "This program will show how far an object will fall in meters over time in seconds.\n\n";

     float index = 1;
     float distance = 0;
     printLabel ();

    do
    {
        distance = fallingDistance (index);
        printInfo(index, distance);
        index += 1;
    } while (index <= 15);

    return 0;
}

float fallingDistance (float T)
{
    float gravity = 9.8;
    float distance = (0.5 * gravity) * (pow(T, 2.0));

    return distance;
}

void printLabel ()
{
    cout << setw(10) << right << " Time " << "|" << setw(10) << " Distance" << endl;
    cout << "__________|__________\n";
}

void printInfo (float T, float D)
{
    cout << setw(10) << right << T << "|" << setw(10) << left << D << endl;
}
