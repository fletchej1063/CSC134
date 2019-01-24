#include <iostream>

using namespace std;

int main()
{
    cout << "IfElse" << endl;
    int i;
    cout << "Type any number: ";
    cin >> i;

    if (i > 10)
    {
        cout << "It's greater than 10." << endl;
    }
    else
    {
        cout << "It's not greater than 10." << endl;
    }

    cout << "IfElse2" << endl;
    //int i;  already initialized
    cout << "Type any number: ";
    cin >> i;

    if (i > 10)
    {
        cout << "It's greater than 10." << endl;
    }
    else if (i == 10)
    {
        cout << "It's equal to 10." << endl;
    }
    else
    {
        cout <<"It's less than 10." << endl;
    }

    cout << "IfElse3" << endl;
    //int i already initialized
    cout << "Type any number: ";
    cin >> i;

    if (i > 100)
    {
        cout << "It's greater than 100." << endl;
    }
    else if (i > 10)
    {
        cout << "It's greater than 10." << endl;
    }
    else
    {
        cout <<
        "It's neither greater than 100 nor greater than 10."
        << endl;
    }

    cout << "ForLoop" << endl;
    int x = 0;
    //int i; already initialized
    for (i = 1; i <= 100; i++)
    {
        x += i;
    }
    cout << x << endl;

    cout << "ForCountdown" << endl;
    //int i; already initialized
    for (i=10; i>=5; i--)
    {
        cout << i << endl;
    }

    cout << "ForLoop2" << endl;
    double xy = 0.0;
    double iy;
    for (iy = 0.0; iy <= 100; iy+=0.1)
    {
        xy += iy;
    }
    cout << xy << endl;

    cout << "WhileLoop" << endl;

    i = 0;

    while (i<=10)
    {
        cout << i << endl;
        i++;
    }
    cout << "All Finished!" << endl;

    cout << "DoWhileLoop" << endl;
    i = 0;

    do
    {
        cout << i << endl;
        i++;
    }
    while (i <= 10);

    cout <<"All Finished!" << endl;



    return 0;
}
