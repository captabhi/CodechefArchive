#include<iostream>
using namespace std;

int main()
{
	int n,q,i,l,r;
	cin>>n>>q;
	unsigned long long int arr[n],sum,max;
	for(i=0;i<n;i++)
	{
		cin>>arr[n];
	}
	
	for(i=0;i<q;i++)
	{
		cin>>l>>r;
		for(x=0;x<2147483648;x++)
		{
			
		
		for(j=l;j<=r;j++)
		{
			sum+=(arr[j]^x);	
			
		}
		if(sum>max)
		{
			max=sum;
			minx=x;
		}
		
		}
	}
	
}
