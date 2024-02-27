#include <iostream>
#include <string>
using namespace std;

int main() {


    string input;
    cout << "Enter a statement: ";
    getline(cin, input);

    string operators = "+-*/%=><&|^!~?:,;";

    cout << "Detected operators:";
    for (char c : input)
    {
        if (operators.find(c) != -1)
        {
            cout << " " <<c;
        }
    }
    cout << endl;

    return 0;
}

