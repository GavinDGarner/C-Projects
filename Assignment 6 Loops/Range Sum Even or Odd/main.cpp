//Gavin Garner CS 317
//Range Sum Even or Odd
// This program gets the sum of all even or odd numbers given user input

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("Result odd.out");

    int N = 0, index = 0, sum = 0;
    string input;

    cout << "Input 'even' or 'odd': ";
    cin >> input;

    if (input != "odd" && input != "even")
    {
        cout << "Please enter even or odd: this program will now terminate";
        return 0;
    }

    outfile << "Input 'even' or 'odd': ";
    outfile << input;

    cout << "Input a number: ";
    cin >> N;
    outfile << "\nInput a number: ";
    outfile << N;

    if (input == "even" && N % 2 != 0)
    {
        cout << "That is not an even number";
        outfile << "That is not an even number";
        return 0;
    }

    if (input == "odd" && N % 2 == 0)
    {
        cout << "That is not an odd number";
        outfile << "That is not an odd number";
        return 0;
    }

    while (index <= N)
    {
        if (N % 2 == 0 && index % 2 == 0 && input == "even")
        {
            sum = sum + index;
        }
        if (N % 2 != 0 && index % 2 != 0 && input == "odd")
        {
            sum = sum + index;
        }
        index += 1;
    }
        cout << "The sum of all these " << input <<  " numbers is: " << sum;
        outfile << "\nThe sum of all these " << input <<  " numbers is: " << sum;


    outfile.close();
    return 0;
}
