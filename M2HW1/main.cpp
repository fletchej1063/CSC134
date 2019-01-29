#include <iostream>

using namespace std;

int main()
{

    int length;
    int width;
    int area;

    cout << "Area of a rectangle" << endl;
    cout << "Please enter the length of the rectangle: " ;
    cin >> length;
    cout << "Please enter the width of the rectangle: " ;
    cin >> width;
    area = length * width;
    cout << "The area of the rectangle is " << area << "." << endl;



    cout << " Celcius to Fahrenheit converter" << endl;
    double celcius;
    double fahrenheit;
    cout << "Please enter the temperature in Celsius: " ;
    cin >> celcius;
    fahrenheit = (celcius * 1.8) + 32;
    cout << "The temperature in Fahrenheit is " << fahrenheit << "." << endl;


    cout <<"Movie database" << endl;

    string movieName;
    double rating;
    int year;
    string movieName2;
    double rating2;
    int year2;

    cout << "Enter the name of your first movie: ";
    cin.ignore();
    getline(cin, movieName);
    cout << "Enter the year the movie was made: ";
    cin >> year;
    cout << "Enter the IMDB rating: ";
    cin >> rating;
    cout << "Enter the name of your second movie: ";
    cin.ignore();
    getline(cin, movieName2);
    cout << "Enter the year the movie was made: ";
    cin >> year2;
    cout << "Enter the IMDB rating: ";
    cin >> rating2;
    if (rating > rating2)
    {
        cout << "I would recommend " << movieName << " over " << movieName2 << ". It seems to be better." << endl;
    }
    else if (rating < rating2)
    {
        cout << "I would recommend " << movieName2 << " over " << movieName << ". It seems to be better." << endl;
    }
    else
    {
        cout << "It seems like both movies are equally as good" << endl;

    }


    cout <<"Average of three grades" << endl;
    double grade1;
    double grade2;
    double grade3;
    double average;

    cout << "Please enter the first grade: " ;
    cin >> grade1;
    cout << "Please enter the second grade: " ;
    cin >> grade2;
    cout << "Please enter the third grade: " ;
    cin >> grade3;
    average = ((grade1+grade2+grade3)/3);
    cout << "The average of the grades is " << average << "." << endl;


    cout << "Wall area" << endl;

    double length2;
    double width2;
    double area2;

    cout << "Please enter the width of the wall in feet:" ;
    cin >> width2;
    cout << "Please enter the length of the wall in feet:" ;
    cin >> length2;
    area2 = length2*width2;
    cout << "The area of the wall is "<< area2 << " square feet." << endl;



    cout << "Wall area2" << endl;

    double length3;
    double width3;
    double area3;
    double gallonPrimer;

    cout << "Please enter the width of the wall in feet: ";
    cin >> width3;
    cout << "Please enter the length of the wall in feet: ";
    cin >> length3;
    area3 = length3*width3;
    cout << "The area of the wall is "<< area3 << " square feet." << endl;
    gallonPrimer = area3/200;
    cout << "The number of gallons of primer you need is " << gallonPrimer << "." << endl;



    cout << "Wall area3" << endl;

    double length4;
    double width4;
    double area4;
    double gallonPrimer4;
    double gallonPaint;
    int numberWall;


    cout << "Please enter the width of the wall in feet: ";
    cin >> width4;
    cout << "Please enter the length of the wall in feet: ";
    cin >> length4;
    cout << "Please enter the number of walls: ";
    cin >> numberWall;
    area4 = length4*width4;
    cout << "The area of the wall is "<< area4 << " square feet." << endl;
    cout << "The area of all the walls is "<< area4*numberWall << " square feet." << endl;
    gallonPrimer4 = ((area4*numberWall)/200);
    cout << "The number of gallons of primer you need is " << gallonPrimer4 << "." << endl;
    gallonPaint = ((area4*numberWall)/350);
    cout << "The number of gallons of paint you need is " << gallonPaint << "." << endl;


    return 0;
}
