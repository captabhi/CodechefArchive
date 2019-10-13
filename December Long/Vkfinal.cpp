#include<iostream>
using namespace std;
int main()
{
	unsigned int n,i;
	cin>>n;
	int arr[n+1];
	arr[1]=2;
	for(i=2;i<=n;i++)
	{
		arr[i]=arr[i-1]+((2*(i-1)+1)+(2*(i-1)+2));
	}
	for(i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
