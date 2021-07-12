//Gavin Garner CS 317
//MT. Everest Fall
// THis program will calculate how far until you hit the ground

#include <cmath>
#include <iostream>
#include <iomanip>

void printLabel ();
void printInfo (float T, float D);
float BeforeSplat (float D);

using namespace std;

int main()
{
    cout << "Oh dear! You have fallen off a mountain! (Time in seconds: Distance in meters)\n" << endl;

    float time = 0;
     float distance = 12000; // starting distance
     printLabel ();

    do
    {
        time = BeforeSplat (distance);
        printInfo(distance, time);
        distance -= 500;
    } while (distance > -1);

    return 0;
}


float BeforeSplat (float D)
{
    float gravity = 9.8;
    float time = pow((2*D / gravity),0.5) ;

    return time;
}

void printLabel ()
{
    cout << setw(10) << right << " Distance " << "|" << setw(10) << left << " Time" << endl;
    cout << "__________|__________\n";
}

void printInfo (float D, float T)
{
    cout << setw(10) << right << D << "|" << setw(10) << left << T << endl;
}
