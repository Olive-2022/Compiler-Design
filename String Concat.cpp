#include<iostream>
#include<string.h>
using namespace std;

int main()
{
string f;
string l;

cout<<"Enter your First Name: ";
getline(cin,f);

cout<<"Enter your Last Name: ";
getline(cin,l);

string full=f + " " +l;
cout<<"Your Full name is: "<<full;

return 0;

}
