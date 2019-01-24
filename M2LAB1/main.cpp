#include <iostream>

using namespace std;

int main()
{
    string movieName;
    double rating;
    int year;
    char firstLetter;

    cout << "Enter the name of your movie: "  ;
    getline(cin, movieName);
    firstLetter = movieName[0];
    cout << "Enter the year the movie was made: ";
    cin >> year;
    cout << "Enter the IMDB rating: ";
    cin >> rating;
    cout << "The movie you entered is named " << movieName << "." << endl;
    cout << "It was released in "<< year << ". It has an IMDB rating of " << rating << "." << endl;
    cout << "I would file this movie under \"" << firstLetter<< "\"." << endl;



    return 0;
}
