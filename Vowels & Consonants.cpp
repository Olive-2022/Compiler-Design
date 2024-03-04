#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream inputFile("input.txt");
    if (!inputFile.is_open())
    {
        cerr << "Source can't be opened" << endl;
        exit(-1);
    }

    int vowel = 0, consonant = 0;
    char ch;
    string message;

    while (getline(inputFile, message))
    {
        cout << message << endl;
    }
    cout << "\n\n";

    inputFile.clear();
    inputFile.seekg(0, ios::beg);

    while (inputFile.get(ch))
    {
        if ((ch == 'a') || (ch == 'A') || (ch == 'e') || (ch == 'E') || (ch == 'i') || (ch == 'I') || (ch == 'o') || (ch == 'O') || (ch == 'u') || (ch == 'U'))
        {
            vowel++;
            cout << "(" << ch << ") ";
        }
        else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        {
            consonant++;
            cout << ch << " ";
        }
    }
    inputFile.close();
    cout << "\n\nNumber of vowels are = " << vowel << "\nNumber of consonants are = " << consonant << endl;
    return 0;
}
