#include<iostream>
using namespace std;


int fact(int n)
{

if(n==0 || n==1)
{
return 1;
}
else
{
return n*fact(n-1);
}

}

int main()
{
int num;
cout<<"Input the number: ";
cin>>num;
cout<<"The factorial of "<<num<<" is "<<fact(num);

return 0;
}

