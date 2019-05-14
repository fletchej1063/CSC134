#include "item.h"
#include <iostream>


Item::Item() {
    // default constructor -- be sure
    // to set name and description later
    // if you use this
    _name = "Item";
    _description = "A blob of stuff.";
    _id = 0;
}

Item::Item(string name, string description, int id) {
    // note that this->foo and foo are different.
    // one is a member variable of this object
    // and the other is a local variable.

    _name = name;
    _description = description;
    _id = id;
}
string Item::printName() {

    return _name;

}
string Item::printDescription() {

    return _description;

}

int Item::getId()  {
    return _id;
}

void Item::setLocationId(int locId)
{
    _id = locId;
}

void ItemList::printAllItems()
{
    // we use an iterator to step through the vector
    // from begin() to end(), incrementing iter each time
    cout << "Printing all items" << endl;

    vector<Item>::iterator itemIter = _items.begin();

    while (itemIter != _items.end())
    {
        string name = itemIter->printName(); // get the name of this item
        cout << name << endl;
        itemIter++; // go to next item
    }


}
void ItemList::printItemsInLocation(int currentLocationId)
{
    // we use an iterator to step through the vector
    cout << "Items here:" << endl;

    vector<Item>::iterator itemIter = _items.begin();

    while (itemIter != _items.end())
    {
        string itemName = itemIter->printName(); // name of item
        int itemLocationId = itemIter->getId(); // loc of item

        if (itemLocationId == currentLocationId) {
            cout << itemName << endl;
        }
        itemIter++; // go to next item
    }

}


void ItemList::add(Item item)
{
    _items.push_back(item);
}

bool ItemList::isItemHere(string itemName, int locationId)
{
    // This method looks up an item by name
    // returns true if it is in this locationId, else false

    vector<Item>::iterator itemIter = _items.begin();

    while (itemIter != _items.end())
    {
        if (itemName == itemIter->printName()) {
            // an item of that name exists
            // is it here?
            if (locationId == itemIter->getId() )
            {
                return true; // right name and right location
            } // item wasn't in this room
        } // item didn't have that name

        itemIter++; // go to next item
    }
    return false; // we didn't find it
}

string ItemList::getItemDescription(string itemName)
{
    string description = "NOT FOUND";
    vector<Item>::iterator itemIter = _items.begin();


    while (itemIter != _items.end())
    {
        if (itemIter->printName() == itemName)
        {
            description = itemIter->printDescription();
        }
        itemIter++;
    }
    return description;
}
void ItemList::updateLocation(string itemName, int locId)
{
    vector<Item>::iterator itemIter = _items.begin();
    while (itemIter != _items.end())
    {
        if (itemIter->printName() == itemName)
        {
            itemIter->setLocationId(locId);
        }
        itemIter++;
    }
}
