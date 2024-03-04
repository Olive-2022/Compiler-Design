#include <iostream>
#include <string>


using namespace std;

bool isIdentifier(const string& input)
{

    if (input.empty())
    {
        return false;
    }


    if (!isalpha(input[0]) && input[0] != '_')
    {
        return false;
    }


    for (size_t i = 1; i < input.size(); ++i)
    {
        if (!isalnum(input[i]) && input[i] != '_')
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string input;
    cout << "Enter input: ";
    cin >> input;

    if (isIdentifier(input))
    {
        cout << "Given input is an identifier." << endl;
    } else
    {
        cout << "Given input is not an identifier." << endl;
    }

    return 0;
}

