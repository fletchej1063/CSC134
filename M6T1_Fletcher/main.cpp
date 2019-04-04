#include <iostream>
#include "observer.h"

using namespace std;

int main()
{
/*    Subject Alarm;

    Police*TJHooker = new Police(&Alarm, "TJ");

    cout<< "TJ on the beat"<< endl;
    Alarm.Event();
    cout<<endl;
    cout<<"TJ off for the day" << endl;
    delete TJHooker;
    Alarm.Event();
*/

    Subject Donuts;
    Subject Alarm;
    Dog *Fido = new Dog(&Alarm);
    Police*TJHooker = new Police(&Donuts, "TJ");
    Police *JoeFriday = new Police(&Alarm, "Joe");


/*    Alarm.AddObserver(&Fido);
    Alarm.AddObserver(&TJHooker);
    Alarm.AddObserver(&JoeFriday);
    Alarm.RemoveObserver((Observer*) &TJHooker);*/
    Alarm.Event();



    return 0;
}
