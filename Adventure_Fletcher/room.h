#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED
#include <string>

using namespace std;

/*
The Room class describes individual rooms in the game.
A room has a name, a description, and a series of exits
which point to other rooms.

Next, we'll add some way to store items in a room.

*/



class Room
{
public:
    Room();     // default constructor
    Room(string, string, int); // name and description
    string printInfo();

    string name;
    string description;
    int roomId;

    // exits
    Room* north;
    Room* south;
    Room* east;
    Room* west;
};


#endif // ROOM_H_INCLUDED
