//M2t1
//Joseph Fletcher
//1/17/2019
#include <iostream>

using namespace std;

int main()
{
    // Listing 3-1 to3-9

    cout << "Listing 3-1" << endl;
    int mynumber;
    mynumber = 10;
    cout << mynumber<< endl;

    cout << "Listing 3-2" << endl;
    //int mynumber;
    mynumber = 10;
    cout << mynumber << endl;
    mynumber = 20;
    cout << mynumber << endl;

    cout << "Listing 3-3" << endl;
    int start = 50;
    int finish;
    finish = start;
    cout << finish << endl;

    cout << "Listing 3-4" << endl;
    int final;
    int time;
    final = 28;
    time = 18;
    cout << final - time << endl;

    cout << "Listing 3-5" << endl;
    int first, second;
    cout << "Dividing 28 by 14." << endl;
    first = 28;
    second = 14;
    cout << "Quotient  " << first / second << endl;
    cout << "Remainder " << first % second << endl;
    cout << "Dividing 32 by 6." << endl;
    first = 32;
    second = 6;
    cout << "Quotient " <<first / second << endl;
    cout << "Remainder " << first % second << endl;

    cout << "Listing 3-6" << endl;
    string mystring;
    mystring = "abcdef";
    cout << mystring[2] << endl;

    cout << "Listing 3-7" << endl;
    //string mystring;
    mystring = "Hello there";
    cout << mystring << endl;

    cout << "Listing 3-8" << endl;
    //int first = 10;
    first = 10;  // redifining variable instead of declaring
    //int second = 20;
    second = 20;  // redifining variable instead of declaring
    string result;
    result = first == second ? "equal" : "not equal";
    cout << result << endl;

    cout << "Listing 3-9" << endl;
    string name;
    cout << "Type your name: ";
    cin>> name;
    cout << "Your name in " << name << endl;



    // only one return at the end
    return 0;
}
