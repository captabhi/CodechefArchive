#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int arr[n],arr2[n],arr3[n]={0};
	for(i=1;i<n;i++)
	{
		arr[i]=i;
	}
	arr2[1]=arr[1];
	for(i=2;i<n;i++)
	{
		arr2[i]=arr[i]^arr2[i-1];
		arr3[arr2[i]]++;
	}
	for(i=1;i<n;i++)
	{
		cout<<arr2[i]<<" ";
	}
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		cout<<arr3[i]<<" ";
	}
}
