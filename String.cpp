#include<iostream>
#include<string.h>
using namespace std;

int main()
{
char str1[]="abcd",str2[]="abCd",str3[]="abcd";
int result;

result= strcmp(str1, str2);
cout<<"strcmp(str1, str2)= "<<result<<endl;
cout<<"strcmp(str1, str2)= "<<result<<endl;
result=strcmp(str1,str3);


return 0;
}
