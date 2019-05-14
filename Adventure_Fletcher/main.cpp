#include <iostream>
#include "game.h"s keyboard
using namespace std;
//Aiming for silver, first two extra credit
int main()
{
    Game g;
    g.startGame();

    while (g.isRunning() == true)
    {
        g.nextTurn();
    }
    g.gameOver();

    return 0;
}
