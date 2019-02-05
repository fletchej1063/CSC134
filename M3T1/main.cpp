#include <iostream>

using namespace std;

int main()
{
    int loops;
    int i = 1;
    double grade;
    double totalGrade = 0;

    cout << "How many tests to average? ";
    cin >> loops;

    while (i<= loops)
    {
        cout << "Grade for test #" << i <<"?";
        cin >> grade;
        totalGrade += grade;
        i++;


    }
    cout << "The average is " << totalGrade/loops << endl;

    int loops1;
   // int i = 1;  i already initialized
    double grade1;
    double totalGrade1 = 0;


    cout << "How many tests to average? ";
    cin >> loops1;

    for (i=1; i <= loops1;i++)
    {
        cout << "Grade for test #" << i <<"?";
        cin >> grade1;
        totalGrade1 += grade1;
    }
    cout << "The average is " << totalGrade1/loops1 << endl;
    return 0;
}
