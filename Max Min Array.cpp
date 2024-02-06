#include<iostream>
using namespace std;


int main()
{
int n;
cout<<"Enter the size of an array : ";
cin>>n;

int arr[n];
cout<<"Enter the elements of an array : "<<endl;

for(int i=0;i<n;++i)
{
    cin>>arr[i];

}

int minV=arr[0];
int maxV = arr[0];

for(int i=0;i<n;++i )
{
    if (arr[i]<minV)
    {
        minV=arr[i];
    }
    else if (arr[i]>maxV)
    {
    maxV=arr[i];
    }
}
  cout<<"Minimum value is : "<<minV<<endl;
  cout<<"Maximum value is : "<<maxV;

  return 0;

}
