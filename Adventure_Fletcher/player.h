#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <string>
#include "room.h"

using namespace std;

class Player
{
private:
    string description;

public:
    Player();
    Room* location;
};
class Inventory : public Player {
public:

};

#endif // PLAYER_H_INCLUDED
