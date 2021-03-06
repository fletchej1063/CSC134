#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED
#include <string>
#include <vector>

using namespace std;

class Item
{
public:
    Item();     // default constructor
    Item(string, string, int); // name and description
    string printName();
    string printDescription();
    int getId();
    void setLocationId(int);

private:

    string _name;
    string _description;
    int _id;

};

class ItemList
{
    // the Game will contain one ItemList,
    // which manages all the items in the game.

    // For more information, see Book IV, Chapter 6,
    // Listing 6-6.
    // That chapter also discusses maps and sets,
    // which are alternatives we'll look at later.

public:
    void printAllItems();
    void printItemsInLocation(int);
    void add(Item); // adds item to the list
    bool isItemHere(string, int); // name of item, location id
    //void moveItemToLocation(Item*);
    string getItemDescription(string);
    void updateLocation(string, int);


private:
    vector<Item> _items;

};

#endif // ITEM_H_INCLUDED
