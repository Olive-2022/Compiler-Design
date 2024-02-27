#include <iostream>
#include <string>
using namespace std;

int main() {
    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput);

    string keyword = userInput.substr(0, userInput.find(' '));
    if (keyword == "int" || keyword == "char" || keyword == "bool" || keyword == "double" ||
        keyword == "float" || keyword == "long" || keyword == "short" || keyword == "unsigned" ||
        keyword == "void" || keyword == "auto")
    {
        cout << "Got a keyword: " << keyword <<endl;
    }
    else {
        cout << "Not a keyword." <<endl;
    }

    return 0;
}
