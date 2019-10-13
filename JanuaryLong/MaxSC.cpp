#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,flag=0;
		unsigned long long int maxelm,sum=0;
		cin>>n;
		unsigned int arr[n][n];
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
		}
		j=n-1;
		sort(arr,arr+n);
		for(i=0;i<n-1;i++)
		{
			
			if(arr[i][n-1]>)
			while(maxelm>arr[i+1][n-1]&&j>=0)
			{
			maxelm=arr[i][--j];
			//cout<<maxelm;	
			}
			if(j<0)
			{
				cout<<"-1\n";
			}
			else
			{
			 sum+=maxelm;	
			}		
		}
		sum+=arr[i][n-1];
		cout<<sum<<endl;
		
	}
}
