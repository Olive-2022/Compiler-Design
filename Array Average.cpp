#include<iostream>
using namespace std;

double average(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
    sum += a[i];

	return (double)sum / n;
}


int main()
{
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;

	int arr[n];

	cout<<"Enter the elements of the array: ";

	for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

	cout<<"The average: "<<average(arr, n) << endl;
	return 0;
}

