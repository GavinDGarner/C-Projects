// Gavin Garner CS 317
// 1-D Array Operations
// Doing stuff with arrays and functions

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

// prototypes
void Readem (float Aray[], int&counter);
void RandB (float Bray[], int counter);
void Printem (float PrintRay[],int counter);
void Addem (float Aray[],float Bray[],float Cray[], int counter);
void Multem (float Aray[],float Bray[],float Cray[], int counter);
float AVGem (float Aray[], int counter);
float Largeem (float Aray[], int counter);
float Smallem (float Aray[], int counter);
float ODDAVGem (float Aray[], int counter);

using namespace std;

int main()
{
    // Variables and Arrays
    int const maxi = 25; // maximum number of data for the arrays
    float arrayA[maxi];
    float arrayB[maxi];
    float arrayC[maxi];
    int counter = 0;
    float AvgA = 0, AvgB = 0;
    float LargeB = 0, LargeA = 0;
    float SmallA = 0, SmallB = 0;
    float oddA = 0, oddB = 0;


    // Part 1
    Readem(arrayA, counter); // counter is changed here and will be used for the rest of the program

    // Part 2
    RandB (arrayB, counter);

    // Part 3
    cout << "Original Data:" << endl;
    Printem (arrayA, counter);

    cout << "Random Data:" << endl;
    Printem (arrayB, counter);

    // Part 4
    Addem (arrayA, arrayB, arrayC, counter);

    // Part 5
    cout << "Data added together:" << endl;
    Printem (arrayC, counter);

    // Part 6
    Multem (arrayA, arrayB, arrayC, counter);

    // Part 7
    cout << "Data multiplied together:" << endl;
    Printem (arrayC, counter);

    // Part 8
    AvgA = AVGem (arrayA, counter);
    AvgB = AVGem (arrayB, counter);

    cout << "Average of Original Data: " << AvgA << endl;
    cout << "Average of Random Data: " << AvgB << endl;
    cout << endl;

    // Part 9
    LargeA = Largeem (arrayA, counter);
    LargeB = Largeem (arrayB, counter);
    cout <<"Largest Value in Original Data: " << LargeA << endl;
    cout <<"Largest Value in Random Data: " << LargeB << endl;
    cout << endl;

    // Part 10
    SmallA = Smallem (arrayA, counter);
    SmallB = Smallem (arrayB, counter);
    cout <<"Smallest Value in Original Data: " << SmallA << endl;
    cout <<"Smallest Value in Random Data: " << SmallB << endl;
    cout << endl;

    // Part 11
    oddA = ODDAVGem (arrayA, counter);
    oddB = ODDAVGem (arrayB, counter);
    cout << "Average of odd numbers in Original Data: " << oddA << endl;
    cout << "Average of odd numbers in Random Data: " << oddB << endl;


    return 0;
}


void Readem (float Aray[], int&counter)
{
    ifstream infile;
    infile.open("numbers2.txt");

    counter = 0;
    while (infile >> Aray[counter])
    {
        counter += 1;
    }
    infile.close();
    return;
}

void RandB (float Bray[], int counter)
{
    int i = 0;
        srand((unsigned) time(0));
       for (i=0; i < counter; i+=1)
    {
        Bray[i] = (rand() % 100) + 1;
    }
    return;
}

void Printem (float PrintRay[],int counter)
{
    int i = 0;

    for (i=0; i < counter; i+=1)
    {
        cout << PrintRay[i] << " ";
    }
    cout << endl;
    cout << endl;
    return;
}

void Addem (float Aray[],float Bray[],float Cray[], int counter)
{
    int i = 0;
    for (i = 0; i < counter; i += 1)
    {
        Cray[i] = Aray [i] + Bray[i];
    }
    return;
}

void Multem (float Aray[],float Bray[],float Cray[], int counter)
{
    int i = 0;
    for (i = 0; i < counter; i += 1)
    {
        Cray[i] = Aray [i] * Bray[i];
    }
    return;
}

float AVGem (float Aray[], int counter)
{
    float avg = 0, sum = 0;
    int i = 0;

    for (i = 0; i < counter; i += 1)
    {
        sum = sum + Aray[i];
    }
    avg = sum / counter;
    return avg;
}

float Largeem (float Aray[], int counter)
{
    float large = Aray[0];
    int i = 0;

    for (i = 0; i < counter; i += 1)
    {
        if (Aray[i] > large)
        {
         large = Aray[i];
        }
    }

    return large;
}

float Smallem (float Aray[], int counter)
{
    float small = Aray[0];
    int i = 0;

    for (i = 0; i < counter; i += 1)
    {
        if (Aray[i] < small)
        {
         small = Aray[i];
        }
    }

    return small;
}

float ODDAVGem (float Aray[], int counter)
{
    float oddavg = 0, oddsum = 0;
    int i = 0, oddcounter = 0;

    for (i = 0; i < counter; i += 1)
    {
        if ((int)Aray[i] % 2 )
        {
            oddcounter = oddcounter;
        }
        else
        {
            oddsum = oddsum + Aray[i];
            oddcounter += 1;
        }
    }
    oddavg = oddsum / oddcounter;
    return oddavg;
}
