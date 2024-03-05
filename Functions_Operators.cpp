#include <iostream>
#include <fstream>
#include <string>
#include <unordered_set>
#include <regex>

using namespace std;

int main() {
    string file_name = "input.txt";
    ifstream file(file_name);
    if (!file.is_open()) {
        cerr << "Failed to open the file." << endl;
        return 1;
    }

    unordered_set<string> functions;
    unordered_set<string> operators;

    string line;
    regex function_regex("\\b(?:int|void)\\s+\\w+\\s*\\(\\s*(?:\\w+\\s+\\w+\\s*,?\\s*)*\\)\\s*\\{?");
    regex operator_regex("[+\\-*/=]");
    while (getline(file, line)) {
        smatch match;
        if (regex_search(line, match, function_regex)) {
            string funcDeclaration = match.str();

            size_t pos = funcDeclaration.find('{');
            if (pos != string::npos) {
                funcDeclaration = funcDeclaration.substr(0, pos);
            }
            functions.insert(funcDeclaration);
        } else {
            regex_iterator<string::iterator> rit(line.begin(), line.end(), operator_regex);
            regex_iterator<string::iterator> rend;
            for (; rit != rend; ++rit) {
                string op = rit->str();
                operators.insert(op);
            }
        }
    }

    cout << "Number of the user-defined functions: " << functions.size() << endl;
    cout << "Name of the user-defined functions:";
    for (const auto& func : functions) {
        cout << " " << func;
    }
    cout << endl;

    cout << "Number of the operators: " << operators.size() << endl;
    cout << "Name of the operators:";
    for (const auto& op : operators) {
        cout << " " << op;
    }
    cout << endl;

    return 0;
}
