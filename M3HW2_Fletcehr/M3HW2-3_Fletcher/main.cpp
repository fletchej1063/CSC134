#include <iostream>

using namespace std;

void printArea(int length, int width)
{
    int area;
    area = length*width;
    cout << "The area is "<< area << endl;
}
int main()
{
    int length, width;
    cout << "Please enter the width of the rectangle:";
    cin>> width;
    cout << "Please enter the length of the rectangle:";
    cin>> length;
    printArea(length,width);
    return 0;
}
