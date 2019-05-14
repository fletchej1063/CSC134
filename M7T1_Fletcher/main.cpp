#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile("..MyFile.text");
    outfile << "Hi" << endl;
    outfile.close();

    return 0;
}
