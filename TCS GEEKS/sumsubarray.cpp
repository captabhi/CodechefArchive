#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		long long int arr[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];	
		}
		long long int sum=0,i=0,j=0;
		sum=arr[0];
		while(sum!=k&&j<n)
		{
			if(sum<k)
			{
				j++;
				sum+=arr[j];
			}else if(sum>k)
			{
				sum-=arr[i];
				i++;
			}
		}
		if(j>=n||i>=n)
		cout<<-1<<endl;
		else 
		cout<<i+1<<" "<<j+1<<endl;
		
		
	}
}


