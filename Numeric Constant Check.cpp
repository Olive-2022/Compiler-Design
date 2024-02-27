#include <iostream>
#include <string>
using namespace std;

bool isNumericConstant(const string& input) {
    for (char c : input) {
        if (!isdigit(c) && c != '.') {
            return false;
        }
    }
    return true;
}

int main() {
    string userInput;
    cout << "Enter a numeric value: ";
    getline(std::cin, userInput);

    cout << (isNumericConstant(userInput) ? "Numeric Constant" : "Not a Numeric Constant") <<endl;

    return 0;
}

