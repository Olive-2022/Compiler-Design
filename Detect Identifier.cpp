#include <iostream>
#include <string>
#include <regex>

int main() {
    using namespace std;

    string input;
    cout << "Enter a C++ variable declaration: ";
    getline(cin, input);

    regex variableRegex(R"((\w+)\s*=\s*\d+)");
    smatch match;

    if (regex_search(input, match, variableRegex))
    {
        if (match.size() > 1)
        {
            string variableName = match[1];
            cout << "Got an identifier: " << variableName << endl;
        } else
        {
            cout << "Variable declaration found, but couldn't extract variable name." << endl;
        }
    }
     else
    {
        cout << "No variable declaration found." << endl;
    }

    return 0;
}
