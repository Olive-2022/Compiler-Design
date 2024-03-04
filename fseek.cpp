#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("file.txt");
    if (!file.is_open())
    {
        cerr << "Error: Unable to open file." << endl;
        return 1;
    }

    file << "This is tutorialspoint.com";

    file.seekp(0, ios::beg);
    file << "C Programming";

    file.close();

    return 0;
}


