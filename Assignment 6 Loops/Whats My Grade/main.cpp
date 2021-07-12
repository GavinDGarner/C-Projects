//Gavin Garner CS 31
//Whats my Grade
// THis program will read input from a file and calculate student's gredes

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


using namespace std;

int main()
{
    ifstream infile;
    infile.open("WhatsMyGrade.txt");
    if(!infile)
    {
        cout << "File did not open properly: this program will TERMINATE";
        return 0;
    }

    ofstream outfile;
    outfile.open("Grades.out");

    float grade1, grade2, grade3, grade4, weight1, weight2, weight3, weight4, weightAVG = 0.0, switchAVG;
    string LastName, FirstName;
    char perc, LetterGrade;
    int index = 0;

    while (FirstName != "Done") // done is our sentinel Value that marks end of file
    {
        if (index == 0)
        {
            infile >> FirstName >> LastName >> grade1 >> weight1 >> perc >> grade2 >> weight2 >> perc >> grade3>> weight3 >> perc >> grade4 >> weight4 >> perc;
        }

        weightAVG = (grade1 * (weight1/100)) + (grade2 * (weight2/100)) + (grade3 * (weight3/100)) + (grade4 * (weight4/100));// THis calculates weighted average and makes percentages into decimals
        switchAVG = weightAVG;


        switch((int)switchAVG/10)
        {
            case 10:
            case 9:
                LetterGrade = 'A';
                break;
            case 8:
                LetterGrade = 'B';
                break;
            case 7:
                LetterGrade = 'C';
                break;
            case 6:
                LetterGrade = 'D';
                break;
            default:
                LetterGrade = 'F';
                break;

        }
        cout << setprecision(1) << fixed;
        cout << setw(10) << right <<  LastName << ", " << setw(10) << left << FirstName << setw(5) << right << weightAVG << " " << LetterGrade << endl;
        outfile << setprecision(1) << fixed;
        outfile << setw(10) << right <<  LastName << ", " << setw(10) << left << FirstName << setw(5) << right << weightAVG << " " << LetterGrade << endl;


        infile >> FirstName >> LastName >> grade1 >> weight1 >> perc >> grade2 >> weight2 >> perc >> grade3>> weight3 >> perc >> grade4 >> weight4 >> perc;
        index += 1; // for insurance that done will not be read and the loop will terminate
    }



    outfile.close();
    infile.close();
    return 0;
}
