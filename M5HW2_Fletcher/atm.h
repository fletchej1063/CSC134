#ifndef ATM_H_INCLUDED
#define ATM_H_INCLUDED

using namespace std;

class ATM
{
protected:
    float balance=0;
public:
    void withdraw(float);
    void deposit(float);
    void checkBalance();
};
class SafeAtm : public ATM
{
public:
    void safeWithdraw(float);
};

class SecureAtm : public SafeAtm
{
private:
    string pin = "1234";
public:
    void setPin();
    bool checkPin(string checkPin);
};
#endif // ATM_H_INCLUDED
