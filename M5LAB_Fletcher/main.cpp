#include <iostream>
#include "room.h"

using namespace std;

int main()
{
    const int Num_ROOMS = 5;
    string name[Num_ROOMS];
    string description[Num_ROOMS];
    string exits[Num_ROOMS];

    name[0]="Entrance";
    description[0]="You are at the entrance. Looks pretty spooky. Two exits north and south.";
    exits[0]="SN";

    name[1]="Outside Clearing";
    description[1]="You decided to retreat and live another day.";
    exits[1]="N";

    name[2]="Death Room";
    description[2]="Are you sure you want to stay in here? Just look at the description! Quick there are three exits, east, west and the way back!";
    exits[2]="EWS";

    name[3]="Lesser Death Room";
    description[3]="It is filled with spike traps!";
    exits[3]="W";

    name[4]="Greater Death Room";
    description[4]="The Grim Reaper is standing before you!!!";
    exits[4]="E";


    for (int i=0; i<Num_ROOMS; i++)
    {
        cout<<name[i]<<description[i] << exits[i] << endl;
    }


    Room Entrance;
    Entrance.name = "Entrance";
    Entrance.description = "You are at the entrance. Looks pretty spooky. Two exits north and south.";
    Entrance.exits= "NS";

    cout << Entrance.name<< endl;
    Entrance.describe();
    return 0;
}
