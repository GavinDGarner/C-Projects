// Gavin Garner CS 317
// Shipping Charges
// This program calculates charges based on user input

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("Result5.out");
    float kg, distance, rate;

    cout << "Enter the weight (in kilograms) of the load: ";
    cin >> kg;
    outfile << "Enter the weight (in kilograms) of the load: ";
    outfile << kg << endl;

    if (kg <= 0.0 || kg > 20.0)
    {
        cout << "ERROR: please view restrictions on the weight of the shipment";
        outfile << "ERROR: please view restrictions on the weight of the shipment";
        return 0;
    }
    cout << "Enter the shipping distance (in miles): ";
    cin >> distance;
    outfile << "Enter the shipping distance (in miles): ";
    outfile << distance << endl;

    if (distance < 10 || distance > 3000)
    {
        outfile << "ERROR: please view restrictions on shipping distance";
        cout << "ERROR: please view restrictions on shipping distance";
        return 0;
    }

    if (kg <= 2.0)
        {
        rate = 1.1;
        }

    if (kg > 2.0 && kg <= 6.0)
        {
        rate = 2.2;
        }

    if (kg > 6.0 && kg <= 10.0)
        {
        rate = 3.7;
        }

    if (kg > 10.0 && kg <= 20.0)
        {
        rate = 4.8;
        }

    cout << setprecision(0) << fixed;
    float mile500 = (distance / 500);
    if (mile500 > 0.0 && mile500 < 1.0)
        mile500 = 1;
    if (mile500 > 1.0 && mile500 < 2.0)
        mile500 = 2;
    float payment = mile500 * rate;

    cout << setprecision(2) << fixed;
    outfile << setprecision(2) << fixed;
    cout << "Payment is: $" << payment << endl;
    outfile << "Payment is: $" << payment << endl;


    outfile.close();
    return 0;
}
