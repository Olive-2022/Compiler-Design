#include <iostream>
#include <cstring>
using namespace std;

#define MAX 5
#define max() {}

int main()
{
    string keyword[32] =
    {
        "auto", "double", "int", "struct", "break", "else", "long",
        "switc", "case", "enum", "register", "typedef", "char",
        "extern", "return", "union", "const", "float", "short",
        "unsigned", "continue", "for", "signed", "void", "default",
        "goto", "sizeof", "volatile", "do", "if", "static", "while"
    };
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int flag = 0;
    for (int i = 0; i < 32; i++) {
        if (str == keyword[i]) {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << str << " is a keyword" << endl;
    else
        cout << str << " is not a keyword" << endl;
    return 0;
}

