#include <iostream>
#include "atm.h"

using namespace std;

SecureAtm account;
void menu()
{
    int choice;
    cout << "MAIN MENU:" << endl;
    cout << "1. Withdraw" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Check Balance" << endl;
    cout << "0. Quit" << endl;
    cin >> choice;
    if (choice == 1)
    {
        float money;
        cout << "How much would you like to withdraw" << endl;
        cin >> money;
        account.safeWithdraw(money);;
        menu();
    }
    else if (choice == 2)
    {
        float money;
        cout << "How much would you like to deposit" << endl;
        cin >> money;
        account.deposit(money);
        menu();
    } else if (choice == 3)
    {
        account.checkBalance();
        menu();
    }else if (choice == 0)
    {
        cout <<"Goodbye!" << endl;
    }
    else
    {
        cout <<"That is not a valid command" << endl;
        menu();
    }
}

int main()
{

    string checkPin;
    char choice;
    bool maybe = false;
    cout<< "Please enter your pin number" << endl;
    cin >> checkPin;
    maybe = account.checkPin(checkPin);

    if (maybe == true)
    {
        menu();
    }
    else
    {
        cout << "Wrong pin. Do you want to retry? (Y/N)" << endl;
        cin >> choice;
        if (choice == 'Y')
        {
            main();
        }else
        {
            cout << "Goodbye!" << endl;
        }

    }

    return 0;
}

