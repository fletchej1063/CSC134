#include <iostream>
#include "atm.h"

using namespace std;

void ATM::withdraw(float money) {
    balance = balance - money;
    cout << "You withdrew " << money << " dollars" << endl;
}

void ATM::deposit(float money) {

    balance = balance + money;
    cout << "You deposited " << money << " dollars" << endl;

}

void ATM::checkBalance() {
    cout << "You have " << balance << " dollars in your account" << endl;

}


void SafeAtm::safeWithdraw(float money) {

    float check;

    check = balance - money;
    if (check >= 0)
    {
        balance = balance - money;
        cout << "You withdrew " << money << " dollars" << endl;
    }else
    {
        cout<< "Sorry you have less than " << money << " dollars in your account." << endl;
    }
    }
void SecureAtm::setPin()
{
    string newPin;
    int cnt;
    do
    {

        cnt = 0;
        cout << "Please enter a new four number pin" << endl;
        cin >> newPin;
        for(int i = 0; newPin[i]; i++)
        {
            cnt++;
        }
    } while (cnt != 4);

    pin = newPin;
    cout << "PIN sucessfully changed!"<< endl;


}
bool SecureAtm::checkPin(string checkPin)
{
    if (checkPin== pin)
    {
        return true;

    }else
    {
        return false;
    }
}
