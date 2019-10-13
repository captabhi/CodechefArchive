#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int min[n],max[n+1];
	
	if(n==1)
	{
	cout<<1<<endl<<1;
	return 1;	
	}
	
	for(int i=0;i<(n/2);i++)
	max[i]=i+2;
	if(n%2==0)
	{
		max[n/2]=1;
		max[n]=(n/2)+1;
		for(int i=n/2+1;i<n;i++)
		{
			max[i]=i+1;
		}
		for(int i=0;i<n/2;i++)
		{
			max[i]=i+1;
		}
		
	}
	else
	{
		max[(n/2)+1]=1;
		max[n]=n/2+1+1;
		for(int i=n/2+2;i<n;i++)
		{
			max[i]=i+1;
		}
		for(int i=0;i<n/2+1;i++)
		{
			max[i]=i+1;
		}
	}
	
	for(int i=1;i<=n;i++)
	cout<<max[i]<<" ";
	cout<<endl;
	
	for(int i=1;i<n;i++)
	min[i]=i;
	min[0]=n;
	
	for(int i=0;i<n;i++)
	cout<<min[i]<<" ";
	
}
