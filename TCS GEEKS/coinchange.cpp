#include<bits/stdc++.h>
using namespace std;
#define INT_MAX1 1000001
int minimum1(int a,int b)
{
	return a<b?a:b;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,amt;
		cin>>n>>amt;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		//sort(arr,arr+n);
		int arr2[amt+1];
		//memset(arr2,INT_MAX1,sizeof(arr2));
		for(int i=1;i<n;i++)
		{
		arr2[i]=INT_MAX1;	
		}
		arr2[0]=0;
		for(int i=0;i<n;i++)
		{
			int val=arr[i];
			//cout<<val<<endl;
			for(int j=val;j<=amt;j++)
			{
				
				if(arr2[j-val]!=INT_MAX1)
				{
					arr2[j]=minimum1(arr2[j],arr2[j-val]+1);
				}
				cout<<arr2[j]<<" ";	
			}
			cout<<endl;
		}
		if(arr2[amt]!=INT_MAX1)
		cout<<arr2[amt]<<endl;
		else
		cout<<-1<<endl;
		//cout<<count(arr,amt,n);
	}
	
}
