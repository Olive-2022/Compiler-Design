#include <iostream>
#include <regex>
#include <string>

using namespace std;


bool matchesAStar(const string& input)
{
    regex pattern("^a*$");
    return regex_match(input, pattern);
}

bool matchesAStarBPlus(const string& input)
{
    regex pattern("^a*b+$");
    return regex_match(input, pattern);
}

bool matchesABB(const string& input)
{
    regex pattern("^abb$");
    return regex_match(input, pattern);
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    bool isAStar = matchesAStar(input);
    bool isAStarBPlus = matchesAStarBPlus(input);
    bool isABB = matchesABB(input);

    if (isAStar)
    {
        cout << "The string matches the pattern a*" << endl;
    }
    if (isAStarBPlus)
    {
        cout << "The string matches the pattern a*b+" << endl;
    }
    if (isABB)
    {
        cout << "The string matches the pattern abb" << endl;
    }
    if (!isAStar && !isAStarBPlus && !isABB)
    {
        cout << "The string does not match any of the patterns." << endl;
    }

    return 0;
}

