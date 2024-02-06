#include<iostream>
using namespace std;

int main()
{
int i,f=1,num;
cout<<"Input the number: ";
cin>>num;

for(i=1;i<=num;i++)
{
f=f*i;
}
cout<<"The factorial of "<<num<<" is "<<f;

return 0;
}
