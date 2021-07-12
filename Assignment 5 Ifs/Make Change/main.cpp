// Gavin Garner CS 317
// Make Change
// This program will tell a user how much change a customer will receive

#include <iostream>
#include <iomanip>
#include <fstream>


using namespace std;


int main()
{

    ofstream outfile;
    outfile.open("Results6.out"); // changing this to create new files

  float payDue, payment;
  int count20 = 0, count10 = 0, count5 = 0, count1 = 0, counthalf = 0, countquarter = 0, countdime= 0 , countnickel = 0, countpenny = 0;

  cout << "Enter total due: ";
  cin >> payDue;

  cout << "Enter amount of payment: ";
  cin >> payment;
  cout << setprecision(2) << fixed <<endl;

  if (payDue > payment)
    {
      cout << "NOT ENOUGH MONEY";
      outfile << "NOT ENOUGH MONEY";
      return 0;
    }


if (payDue == payment)
    {
      cout << "NO CHANGE";
      outfile << "NO CHANGE";
      return 0;
    }

    payment = payment - payDue;

    cout << "Change is: " << endl;
    outfile << "Change is: " << endl;

  while (payment >= 20.00)
    {
        payment = payment - 20.00;
        count20 = count20 + 1;
    }

    if (count20 > 0)
    {
         cout << count20 << " Twenty dollar bills" << endl;
            outfile << count20 << " Twenty dollar bills" << endl;
    }



  while (payment >= 10.00)
    {
        payment = payment - 10.00;
        count10 = count10 + 1;
    }

    if (count10 > 0)
    {
        cout << count10 << " Ten dollar bills" << endl;
        outfile << count10 << " Ten dollar bills" << endl;

    }


  while (payment >= 5.00)
    {
        payment = payment - 5.00;
        count5 = count5 + 1;
    }

    if (count5 > 0)
    {
        cout << count5 << " Five dollar bills" << endl;
        outfile << count5 << " Five dollar bills" << endl;
    }


  while (payment >= 1.00)
    {
        payment = payment - 1.00;
        count1 = count1 + 1;
    }

    if (count1 > 0)
    {
        cout << count1 << " One dollar bills" << endl;
        outfile << count1 << " One dollar bills" << endl;
    }


  while (payment >= 0.50)
    {
        payment = payment - 0.50;
        counthalf = counthalf + 1;
    }

    if (counthalf > 0)
    {
        cout << counthalf << " Half dollar coins" << endl;
        outfile << counthalf << " Half dollar coins" << endl;
    }

  while (payment >= 0.25)
    {
        payment = payment - 0.25;
        countquarter = countquarter + 1;
    }

    if (countquarter > 0)
    {
        cout << countquarter << " Quarters" << endl;
        outfile << countquarter << " Quarters" << endl;

    }

while (payment >= 0.10)
    {
        payment = payment - 0.10;
        countdime = countdime + 1;
    }

    if (countdime > 0)
    {
        cout << countdime << " Dimes" << endl;
        outfile << countdime << " Dimes" << endl;
    }


while (payment >= 0.05)
    {
        payment = payment - 0.05;
        countnickel = countnickel + 1;
    }

    if (countnickel > 0)
    {
        cout << countnickel << " Nickels" << endl;
        outfile << countnickel << " Nickels" << endl;
    }



  while (payment >= 0.01)
    {
        payment = payment - 0.01;
        countpenny = countpenny + 1;
    }


    if (countpenny > 0)
    {
        cout << countpenny << " Pennies" << endl;
        outfile << countpenny << " Pennies" << endl;
    }

    outfile.close();

    return 0;
}
