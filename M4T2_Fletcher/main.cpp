#include <iostream>

using namespace std;

int main()
{
    cout << "Listing 7-1" << endl;
    int NumberOfPotholes = 532587;
    cout << &NumberOfPotholes << endl;

    cout << "Listing 7-2" << endl;
    //int NumberOfPotholes;     already initialized
    int *ptr;
    ptr = &NumberOfPotholes;
    *ptr = 6087;
    cout << NumberOfPotholes<< endl;

    cout << "Listing 7-3" << endl;
    // int NumberOfPotholes;        already initialized
    int *ptr1 = &NumberOfPotholes;
    int SaveForLater;
    *ptr = 6087;
    SaveForLater = *ptr;
    cout << SaveForLater << endl;
    *ptr = 7000;
    cout << *ptr << endl;
    cout << SaveForLater << endl;


    cout << "Listing 7-4" << endl;
    string GoodMovie;
    string *ptrToString;
    GoodMovie = "Best in Show";
    ptrToString = &GoodMovie;
    cout << *ptrToString << endl;
    *ptrToString = "Galaxy Quest";
    cout << GoodMovie<< endl;


    cout << "Listing 7-5" << endl;
    string HorribleMovie;
    string *ptrToString1;
    HorribleMovie = "L.A. Confidential";
    ptrToString1 = &HorribleMovie;

    for (unsigned i = 0; i < HorribleMovie.length(); i++)
    {
        cout << (*ptrToString1) [i] << " ";
    }
    cout << endl;

    cout << "Listing 7-6" << endl;
    int ExpensiveComputer;
    int CheapComputer;
    int *ptrToComp;

    ptrToComp = &ExpensiveComputer;
    *ptrToComp = 2000;
    cout << *ptrToComp<< endl;

    ptrToComp = &CheapComputer;
    *ptrToComp = 500;
    cout << *ptrToComp << endl;

    ptrToComp = &ExpensiveComputer;
    cout << *ptrToComp<< endl;

    return 0;
}
