#include <iostream>
#include "arithmetic.h"
#include "temperature.h"

using namespace std;


void calculator();
void converter();

void menu()
{
    int choice;
    cout << "MAIN MENU:" << endl;
    cout << "1. Calculator" << endl;
    cout << "2. Temperature Converter" << endl;
    cout << "0. Exit" <<endl;
    cin >> choice;
    if (choice == 1)
    {
        calculator();
    }
    else if (choice == 2)
    {
        converter();
    } else if (choice == 0)
    {
        cout <<"Goodbye!" << endl;
    }
    else
    {
        cout <<"That is not a valid command" << endl;
        menu();
    }
}
void calculator()
{
    int choice = -1;
    while (choice != 0)
    {
        int num1, num2;
        char opcode;

        cout << "Enter an expression (for instance 3 + 3)" << endl;
        cin>> num1>> opcode>>num2;
        cout <<"You entered; " << num1 << " " << opcode << " " << num2<< endl;
        if (opcode == '+')
        {
            cout << add(num1,num2) << endl;
        } else if (opcode == '-')
        {
            cout << subtract(num1,num2) << endl;
        } else if (opcode == '*')
        {
            cout << multiply(num1,num2) << endl;
        } else if (opcode == '/')
        {
            cout << divide(num1,num2) << endl;
        }
        cout << "Do you want to do another operation?" << endl;
        cout << "1.Another operation" << endl;
        cout << "0.Exit" << endl;
        cin >> choice;
    }



        menu();
}
void converter()
{
    int choice;
    float value;

    do {
        cout << "What conversion do you want to do?" << endl;
        cout << "1.Celsius to Kelvin" << endl;
        cout << "2.Kelvin to Celsius" << endl;
        cout << "3.Celsius to Fahrenheit" << endl;
        cout << "4.Fahrenheit to Celsius" << endl;
        cout << "0.Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Please enter the temperature in Celsius" << endl;
            cin >> value;
            cout << "The temperature in Kelvin is " << celToKelvin(value) << endl;
            break;
        case 2:
            cout << "Please enter the temperature in Kelvin" << endl;
            cin >> value;
            cout << "The temperature in Celsius is " << kelvinToCel(value) << endl;
            break;
        case 3:
            cout << "Please enter the temperature in Celsius" << endl;
            cin >> value;
            cout << "The temperature in Fahrenheit is " << CelToFahren(value) << endl;
            break;
        case 4:
            cout << "Please enter the temperature in Fahrenheit" << endl;
            cin >> value;
            cout << "The temperature in Celsius is " << FahrenToCel(value) << endl;
            break;
        case 0:
            cout << "Exiting temperature menu" << endl;
            break;

        default:
            cout << "Please enter a valid choice" << endl;

        }
    }while (choice != 0);
    menu();
}
