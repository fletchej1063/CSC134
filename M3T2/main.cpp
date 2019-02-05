#include <iostream>

using namespace std;

int main()
{
    double payRate;
    int i = 30;

    cout << "Please enter your pay per hour: ";
    cin >> payRate ;

    cout << "Hours      Total Pay" << endl;
    cout << "----------------------"<< endl;
    while (i <=40)
    {

        cout << i <<"\t\t$" << payRate*i << endl;

        i++;

    }

    double payRate1;
    //int i;  i already initialized

    cout << "Please enter your pay per hour: ";
    cin >> payRate1 ;

    cout << "Hours      Total Pay" << endl;
    cout << "----------------------"<< endl;
    for (i=30; i<=40; i++)
    {
        cout << i <<"\t\t$" << payRate*i << endl;
    }


    return 0;
}
