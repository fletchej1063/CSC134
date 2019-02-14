#include <iostream>

using namespace std;

int main()
{
    float totalOunces = 0;
    float ounces;
    int bottles;
    cout << "Please enter the ounces dispensed (-1 for no more ounces): " ;
    cin >> ounces;
    while ( ounces != -1)
    {
        totalOunces += ounces;
        bottles = totalOunces/16;

        cout <<"The number of ounces dispensed is " << totalOunces <<". The total number of bottle saved is " << bottles << endl;
        cout << "Please enter next ounces(-1 to stop): ";

        cin >> ounces;

    }


    return 0;
}
