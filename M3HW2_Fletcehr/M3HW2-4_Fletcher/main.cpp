#include <iostream>

using namespace std;

int calcArea(int length, int width)
{
    int area;
    area = length*width;
    return area;
}
int main()
{
    int length, width;

    cout << "Please enter the width of the rectangle:";
    cin>> width;
    cout << "Please enter the length of the rectangle:";
    cin>> length;
    cout << "The area is " << calcArea(length,width);
    return 0;
}
