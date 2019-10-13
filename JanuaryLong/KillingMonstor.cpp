#include<iostream>
using namespace std;
int main()
{
	unsigned int n,q,x,y,liv,i,j;
	cin>>n;
	liv=n;
	long long  int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>q;
	for(i=0;i<q;i++)
	{
		cin>>x>>y;
		
		for(j=0;j<n;j++)
		{
			if(arr[j]<=0)
			continue;
			int r=(j&x);
			//cout<<r<<" ";
			 if(r==j)
			{
			arr[j]-=y;
			if(arr[j]<=0)
			liv--;	
			}
			
		}
		cout<<liv<<endl;
	}
	
}
