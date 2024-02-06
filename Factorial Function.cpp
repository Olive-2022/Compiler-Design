#include<iostream>
using namespace std;


void fact(int n)
{
int i, f=1;
for(i=1;i<=n;i++)
{
f=f*i;
}
cout<<"The factorial of "<<n<<" is "<<f;
}

int main()
{
int num;
cout<<"Input the number: ";
cin>>num;
fact(num);

return 0;
}

