#include<iostream>
#include<string.h>
using namespace std;

int main()
{
char f[50];
char l[50];

cout<<"Enter your First Name: ";
cin.getline(f,50);

cout<<"Enter your Last Name: ";
cin.getline(l,50);

string full=strcat(f,l);

cout<<"Your Full name is: "<<full;

return 0;

}



