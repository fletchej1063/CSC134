#include <iostream>

using namespace std;

int main()
{
    double nGrade;
    char lGrade;

    cout << "Please enter the numerical grade: ";
    cin >> nGrade;

    if (nGrade >= 89.5)
    {
        lGrade = 'A';
    }
    else if (nGrade >= 79.5)
    {
        lGrade = 'B';
    }
    else if (nGrade >= 69.5)
    {
        lGrade = 'C';
    }
    else if (nGrade >= 59.5)
    {
        lGrade = 'D';
    }
    else
    {
        lGrade = 'F';
    }
    cout << "The letter grade is " << lGrade << "." << endl;

    return 0;
}
