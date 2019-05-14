#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include <iostream>
#include <vector>
#include <string>
#include "room.h"
#include "player.h"
#include "item.h"

using namespace std;

    const int NUM_ROOMS = 6;
    const int NUM_ITEMS = 3;
    static const int INVENTORY = -1;

class Game
{
private:


    vector <Room*> rooms;
    vector <Item*> items;
    Player player;
    int score;
    bool gameIsRunning;
    // TODO: Add NPC
    //add NPC Reaper
    ItemList itemList;
    void commandExamine(string);
    void commandGet(string);
    void commandDrop(string);
    void commandInventory();

public:
    Game();

    ~Game();
    void startGame();
    void gameOver();
    bool isRunning();
    void nextTurn();
    void commandGo(string);
    void commandLook();
    void commandScore();
    void checkScore();

    int getScore();
};

#endif // GAME_H_INCLUDED
