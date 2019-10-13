#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		int arr[n];
		float sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];	
		}
		float avg=sum/n;
		for(int i=0;i<n;i++)
		{
			if(arr[i]>avg)
			{
				arr[i]-=k;
			}
			else
			{
				arr[i]+=k;
			}
		}
		sort(arr,arr+n);
		cout<<arr[n-1]-arr[0]<<endl;
	}
}
