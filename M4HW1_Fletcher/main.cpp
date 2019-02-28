#include <iostream>
#include <sstream>
#include <stdlib.h>

using namespace std;

void MessMeUp(int &myparam)
{
    myparam = myparam * 2 + 10;
}
string *GetNotSoSecretCode()
{
    string *code = new string("ABCDEF");
    return code;
}
string *GetSecretCode()
{
    string *code = new string;
    code->append("CR");

    int randomnumber = rand();
    ostringstream converter;
    converter << randomnumber;

    code->append(converter.str());
    code->append("NG");
    return code;
}
void Paranoid(string *realmessage)
{
    (*realmessage)[6] = 'i';
    realmessage->replace(9,1,"");
    realmessage->insert(18,"ad");
    realmessage->replace(15,2,"in");
    realmessage->replace(23,7,"!");
    realmessage->replace(4,3,"ali");
}
void ChangesAreGood1(int *myparam)
{
    (*myparam) += 10;
    cout << "Inside the function:" << endl;
    cout << (*myparam) << endl;

}
void ChangesAreGood(int myparam)
{
    myparam += 10;
    cout << "Inside the function:" << endl;
    cout << myparam << endl;

}
string Paranoid1(const string *realmessage)
{
    string NewString = *realmessage;
    NewString[6] = 'i';
    NewString.replace(9,1,"");
    NewString.insert(18,"ad");
    NewString.replace(15,2,"in");
    NewString.replace(23,7,"!");
    NewString.replace(4,3,"ali");

    return NewString;
}
int main()
{
    cout << "Listing 7-7" << endl;
    int *ptr = new int;
    *ptr = 10;
    cout << *ptr << endl;

    cout << "Listing 7-8" << endl;
    int *ptr1 = new int(10);
    cout << *ptr1 << endl;

    cout << "Listing 7-9" << endl;
    string *Password = new string;
    *Password = "The egg salad is not fresh.";
    cout << *Password << endl;

    cout << "Listing 7-10" << endl;
    string *phrase = new string("All presidents are cool!!!");
    cout << *phrase << endl;

    (*phrase)[20] = 'r';
    phrase->replace(22, 4, "oked");
    cout << *phrase << endl;
    delete phrase;

    cout << "Listing 7-11" << endl;
    int mynumber = 30;
    cout << "Before the function:" <<endl;
    cout << mynumber << endl;
    ChangesAreGood(mynumber);
    cout << "After the function:" << endl;
    cout << mynumber << endl;


    cout << "Listing 7-12" << endl;
    int mynumber1 = 30;
    cout << "Before the function:" <<endl;
    cout << mynumber1 << endl;
    ChangesAreGood1(&mynumber);
    cout << "After the function:" << endl;
    cout << mynumber << endl;

    cout << "Listing 7-13" << endl;
    string message = "The friends are having dinner";
    cout << message<< endl;
    Paranoid(&message);
    cout <<message<< endl;

    cout << "Listing 7-14" << endl;
    string *newcode;
    int index;
    for (index =0; index < 10; index++)
    {
        newcode = GetSecretCode();
        cout << *newcode << endl;
    }


    cout << "Listing 7-15" << endl;
    string newcode1;
    int index1;
    for (index1 =0; index1 < 10; index1++)
    {
        newcode1 = *GetNotSoSecretCode();
        cout << newcode1 << endl;
    }

    cout << "Listing 7-16" << endl;
    int mynumber2 = 30;
    MessMeUp(mynumber2);
    cout << mynumber2 << endl;

    cout << "Listing 7-17" << endl;
    string message1 = "The friends are having dinner";
    cout << message1<< endl;
    string NewMessage = Paranoid1(&message1);
    cout <<NewMessage<< endl;

    return 0;
}
