#include <iostream>
#include <vector>
#include <string>

#include "room.h"

using namespace std;

void testTwoRooms() {
    // test of stringing together two rooms
    Room* entrance = new Room("Entrance","You are at the entrance. Looks pretty spooky. Two exits north and south.");
    Room* outside = new Room("Outside Clearing","You decided to retreat and live another day.");
    Room* death = new Room("Death Room","Are you sure you want to stay in here? Just look at the description! Quick there are three exits, east, west and the way back!");
    Room* lesser = new Room("Lesser Death Room","It is filled with spike traps!");
    Room* greaters = new Room("Greater Death Room","The Grim Reaper is standing before you!!!");

    const int NUM_ROOMS = 5;
    vector<Room*> rooms(NUM_ROOMS);
    rooms[0] = entrance;
    rooms[1] = outside;
    rooms[2] = death;
    rooms[3] = lesser;vector<Room*> rooms(NUM_ROOMS);
    rooms[4] = greaters;

    entrance->south = outside;
    outside->north = entrance;
    entrance->north = death;
    death->south = entrance;
    lesser->west = death;
    death->east = lesser;
    greaters->east = death;
    death->west = greaters;

    // going for a walk
    Room* myLocation = entrance;

    cout << myLocation->printInfo();

    cout << "...headed north..." << endl;
    myLocation = myLocation->north;

    cout << myLocation->printInfo();

    cout << "...headed west..." << endl;
    myLocation = myLocation->west;

    cout << myLocation->printInfo();

    cout << "done." << endl;
}

void testVector() {
    const int NUM_ROOMS = 5;
    string names[] = {"Entrance",
                        "Outside Clearing",
                        "Death Room",
                        "Lesser Death Room",
                        "Greater Death Room"};
    string descriptions[] = {"You are at the entrance. Looks pretty spooky. Two exits north and south.",
                        "You decided to retreat and live another day.",
                        "Are you sure you want to stay in here? Just look at the description! Quick there are three exits, east, west and the way back!",
                        "It is filled with spike traps!",
                        "The Grim Reaper is standing before you!!!"};

    // a vector works very similiar to an array
    // we'll get into the differences later
    vector<Room*> rooms(NUM_ROOMS);

    // now we have a vector of 4 blank rooms.
    // let's configure it with our names and descriptions
    for (int i=0; i < NUM_ROOMS; i++) {
        rooms[i] = new Room();
        rooms[i]->name = names[i];
        rooms[i]->description = descriptions[i];
    }

    // list all rooms
    for (int i=0; i < NUM_ROOMS; i++) {
        cout << "Next room:" << endl;
        cout << rooms[i]->printInfo();

    }

}

void runTests() {
    /*
    This code gives two separate examples
    1. Create two rooms and use a Room pointer
    to keep the player's current location,
    then move between rooms

    2. Create a vector containing room pointers,
    and create rooms with names and descriptions
    for each pointer
    */

    cout << "Testing room walk" << endl;
    testTwoRooms();
    cout << "-------------------" << endl;
    cout << "Testing room creation" << endl;
    testVector();
}

int main()
{
    runTests();
    return 0;
}
