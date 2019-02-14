#include <iostream>

using namespace std;

int getNumberGrade()
{
    int num = -1;
    do
    {
        cout << "Please enter the number grade: ";
        cin >> num;
    } while( num>100 || num <0);
    return num;
}
char convertNumberToLetterGrade(int nGrade)
{
    char lGrade;
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
    return lGrade;
}
int main()
{
    int number;
    number = getNumberGrade();
    cout << "The letter grade is a(n) " << convertNumberToLetterGrade(number);
    return 0;
}
