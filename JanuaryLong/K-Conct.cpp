#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,i,j,flag=0;
		long long int maxsum,maxtill,sum=0;
		cin>>n>>k;
		int arr[2*n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			arr[n+i]=arr[i];
			if(arr[i]>0)
			flag=1;
		}
		maxtill=maxsum=0;
		if(flag==1)
		{
		
		if(k>=2)
		{
		for(i=0;i<2*n;i++)
		{
			if(maxtill+arr[i]>0)
			{
			maxtill+=arr[i];	
			}
			else
			maxtill=0;
			maxsum=max(maxtill,maxsum);
		}
		for(i=0;i<n;i++)
		{
			sum+=arr[i];
		}
		if(sum>0)
		{
			maxsum+=(sum*(k-2));
		}		
		}
		else
		{
		  for(i=0;i<n;i++)
		{
			if(maxtill+arr[i]>0)
			{
			maxtill+=arr[i];	
			}
			else
			maxtill=0;
			maxsum=max(maxtill,maxsum);
		}	
		}
		}
		else
		{  
		     maxsum=arr[0];
			for(i=1;i<n;i++)
			{
				if(arr[i]>maxsum)
				maxsum=arr[i];
			}
		}
		
		
		cout<<maxsum<<endl;
		
	}
}
