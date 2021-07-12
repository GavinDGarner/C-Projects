//Gavin Garner CS 317
//Compounding Interest
// THis program will calculate interest on savings

#include <cmath>
#include <iostream>
#include <iomanip>

void printLabel ();
void printInfo (int year, float account1, float account2);
float interestCal (float initial);

using namespace std;

int main()
{

    int year = 5;
    float money1 = 5000, money2 = 10000, account1 = 0, account2 = 0;

    printLabel ();

    do
    {
        account1 = interestCal (money1);
        account2 = interestCal (money2);
        money1 = account1;
        money2 = account2;

        printInfo(year, account1, account2);

        year += 5;
    }while (year < 61);


    return 0;
}

void printLabel ()
{
    cout << setw(10) << left << "number" << setw(10) << right << " Account 1" << "|" << setw(10) << left << " Account 2 " << endl;
    cout << setw(10) << left << "year" << setw(10) << right << "$5,000.00 " << "|" << setw(10) << left << "$10,000.00" << endl;
    cout << "====================|==========\n";
}

float interestCal (float initial)
{
   float money = 0, monthly = 0.08 /12;


   money = initial * (pow(1 + monthly, 60));
   return money;
}

void printInfo (int year, float account1, float account2)
{
    cout << setprecision(2) << fixed;
    cout << setw(10) << left << year << setw(10) << right << account1 << "|" << setw(10) << left << account2 << endl;
}

