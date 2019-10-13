#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cin>>n;
	unsigned int arr[n],i,arr2[n],min1=100000,min2=100000,min3=100000;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]<min1&&arr2[i]==1)
		{
			min1=arr[i];
		}
		else if(arr[i]<min2&&arr2[i]==2)
		{
			min2=arr[i];
		}
		else if(arr[i]<min3&&arr2[i]==3)
		{
			min3=arr[i];
		}
		
	}
	
	if(min1+min2<min3)
	cout<<min1+min2<<endl;
	else 
	cout<<min3<<endl;
	
}
