#include "game.h"

Game::Game()
{
    //Create the game object
    gameIsRunning = false;
    vector<Room*> rooms(NUM_ROOMS);
    this->rooms = rooms;
    vector<Item*> items(NUM_ITEMS);
    this->items = items;

}

Game::~Game()
{
    //Destructor  clean heap
}

void Game::startGame()
{
    cout <<"Starting Game"<< endl;
    gameIsRunning = true;
    score = 0;
    Room* entrance = new Room("Entrance","You are at the entrance. Looks pretty spooky. There are two exits north and south.", 0);
    Room* outside = new Room("Outside Clearing","You decided to retreat and live another day.", 1);
    Room* death = new Room("Death Room","Are you sure you want to stay in here? Just look at the description! Quick there are three exits, east, west and the way back!", 2);
    Room* lesser = new Room("Lesser Death Room","It is filled with spike traps!", 3);
    Room* greaters = new Room("Greater Death Room","The Grim Reaper is standing before you!!!", 4);
    Room* shrine = new Room("Shrine","A room dedicated to popular idol", 5);
    Room* forest = new Room("A cozy forest","A nice place to rest", 6);
    Room* graveyard = new Room("A spooky graveyard","A place of rest for all adventurers before you", 7);
    Room* soul = new Room("Soul room","The place the grim reaper stores fallen souls", 8);
    Room* hell = new Room("Hell","Those who reside here did the most horrible thing you could do. Piracy!", 9);

    const int ENTRANCE = 0;
    const int OUTSIDE = 1;
    const int DEATH = 2;
    const int LESSER = 3;
    const int GREATERS = 4;
    const int SHRINE = 5;
    const int FOREST = 6;
    const int GRAVE = 7;
    const int SOUL = 8;
    const int HELL = 9;
    Item traps = Item("Spike Traps", "Spikes of doom", LESSER);
    itemList.add(traps);
    Item coin = Item("Coin", "Gold Coin, A treasure that adds points", ENTRANCE);
    itemList.add(coin);
    Item sword = Item("Sword", "Death slayer, A sword of awesome power", DEATH);
    itemList.add(sword);
    Item statue = Item("Statue", "A figure of a golden idol", SHRINE);
    itemList.add(statue);
    Item hSoul = Item("Soul", "The soul of the damned", HELL);
    itemList.add(hSoul);


    rooms[0] = entrance;
    rooms[1] = outside;
    rooms[2] = death;
    rooms[3] = lesser;
    rooms[4] = greaters;
    rooms[5] = shrine;
    rooms[6] = forest;
    rooms[7] = graveyard;
    rooms[8] = soul;
    rooms[9] = hell;

    entrance->south = outside;
    outside->north = entrance;
    entrance->north = death;
    death->south = entrance;
    lesser->west = death;
    death->east = lesser;
    greaters->east = death;
    death->west = greaters;
    outside->west = forest;
    forest->east = outside;
    graveyard->west = outside;
    outside->east = graveyard;
    shrine->south = lesser;
    lesser->north = shrine;
    soul->south = greaters;
    greaters->north = soul;
    soul->north = hell;
    hell->south = soul;

    player.location = rooms[0];

    commandLook();

}

void Game::gameOver()
{
    cout<<"Ending Game"<< endl;
    gameIsRunning = false;
}
bool Game::isRunning()
{
    return gameIsRunning;
}
int Game::getScore()
{
    return score;
}

void Game::nextTurn()
{
    checkScore();
    cout <<"this is a game turn." << endl;

    cout << ">";
    string verb = "";
    string noun ="";
    cin>>verb;

    if (verb == "go") {
        cin >> noun;
        commandGo(noun);
    } else if (verb == "quit") {
    gameIsRunning = false;
    cout << "Quiting" << endl;
    } else if (verb == "look") {
        cout << "Looking around" << endl;
        commandLook();
    } else if (verb =="score") {
        commandScore();
    } else if (verb == "help") {
        cout <<"go (direction), quit, score, look, examine (object), get (object), drop (object), inventory"<<endl;
    }
    else if (verb == "examine") {
        cin >> noun;
        commandExamine(noun);
    }
    else if (verb == "get") {
        cin >> noun;
        commandGet(noun);
    }
    else if (verb == "drop") {
        cin >> noun;
        commandDrop(noun);
    } else if (verb == "inventory" || "i") {
        commandInventory();
    }else{
        cout <<"I don't understand the word\"" << verb << "\"" <<endl;
    }
}


void Game::commandGo(string direction) {
    cout << "Trying to go " << direction << endl;
    if (direction =="east") {
        if (player.location->east == 0) {
            cout <<"You can't go east here." << endl;

        }
        else {
                cout << "Successful!" << endl;
            player.location = player.location->east;
            commandLook();
        }

    } else if (direction =="west") {
        if (player.location->west == 0) {
            cout <<"You can't go west here." << endl;

        }
        else {
                cout << "Successful!" << endl;
            player.location = player.location->west;
            commandLook();
        }

    } else if (direction =="north") {
        if (player.location->north == 0) {
            cout <<"You can't go north here." << endl;

        }
        else {
                cout << "Successful!" << endl;
            player.location = player.location->north;
            commandLook();
        }

    } else if (direction =="south") {
        if (player.location->south == 0) {
            cout <<"You can't go south here." << endl;

        }
        else {
                cout << "Successful!" << endl;
            player.location = player.location->south;
            commandLook();
        }

    } else {
        cout << "I don't know that direction" << endl;
    }
}
void Game::commandLook()
{

    cout << player.location->printInfo();
    itemList.printItemsInLocation(player.location->roomId);

}

void Game::commandScore()
{
    cout << getScore() << endl;
}
void Game::commandExamine(string noun) {
    //cout << "TODO: implement examine" << endl;
    if (itemList.isItemHere(noun, player.location->roomId)) {
        cout << "That is here." << endl;
        cout <<itemList.getItemDescription(noun)<<endl;
        // TODO: print the description of that item
        } else if (itemList.isItemHere(noun, INVENTORY))
        {
            cout <<"You're carrying that."<<endl;
            cout <<itemList.getItemDescription(noun) <<endl;
        }

    else
    {
        cout << "That is not here." << endl;
    }
}
void Game::commandInventory()
{
    itemList.printItemsInLocation(INVENTORY);
}


void Game::commandGet(string noun) {
    //cout << "TODO: implement get" << endl;
    if (itemList.isItemHere(noun, player.location->roomId)) {
        cout <<"Done"<< endl;
        itemList.updateLocation(noun, INVENTORY);
    }
    else if (itemList.isItemHere(noun, INVENTORY)){
        cout << "You are carrying the " << noun << endl;
    } else {
    cout << "The " << noun << " is not here." << endl;
    }
}
void Game::commandDrop(string noun) {
    //cout << "TODO: implement drop" << endl;
    if (itemList.isItemHere(noun, INVENTORY)) {
        cout <<"Dropped"<< endl;
        itemList.updateLocation(noun, player.location->roomId);
    }else {
    cout << "The " << noun << " is not in your inventory." << endl;
    }
}
void Game::checkScore()
{
    score =0;
    if (itemList.isItemHere("Coin", INVENTORY)) {
        score +=1;
    }
    if (itemList.isItemHere("Soul", INVENTORY)) {
        score +=1;
    }
    if (itemList.isItemHere("Statue", INVENTORY)) {
        score +=1;
    }
}
