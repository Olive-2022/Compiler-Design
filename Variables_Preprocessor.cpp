#include <iostream>
#include <fstream>
#include <string>
#include <unordered_set>
#include <regex>

using namespace std;

bool isExcludedWord(const string& word) {
    static const unordered_set<string> exclusions = {"int", "return", "using", "namespace", "cout", "endl"};
    return exclusions.find(word) != exclusions.end();
}

int main() {
    string file_name = "input.txt";
    ifstream file(file_name);
    if (!file.is_open()) {
        cerr << "Failed to open the file." << endl;
        return 1;
    }

    unordered_set<string> variables;
    unordered_set<string> preprocessors;
    bool inside_function = false;

    string line;
    regex word_regex("\\b[a-zA-Z]\\b");
    while (getline(file, line)) {
        if (line.find("#") == 0) {
            preprocessors.insert(line.substr(0, line.find(" ")));
        } else if (line.find("}") != string::npos) {
            inside_function = false;
        } else if (inside_function) {

            continue;
        } else if (line.find("(") != string::npos && line.find(")") != string::npos) {
            inside_function = true;
        } else {

            auto words_begin = sregex_iterator(line.begin(), line.end(), word_regex);
            auto words_end = sregex_iterator();
            for (sregex_iterator i = words_begin; i != words_end; ++i) {
                smatch match = *i;
                string word = match.str();
                if (!isExcludedWord(word)) {
                    variables.insert(word);
                }
            }
        }
    }

    cout << "Number of the variables: " << variables.size() << endl;
    cout << "Name of the variables:";
    for (const auto& var : variables) {
        cout << " " << var;
    }
    cout << endl;

    cout << "Number of the preprocessors: " << preprocessors.size() << endl;
    cout << "Name of the preprocessors:";
    for (const auto& pre : preprocessors) {
        cout << " " << pre;
    }
    cout << endl;

    return 0;
}
