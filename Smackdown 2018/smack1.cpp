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
		
		sort(arr,arr+n,greater<int>());
		long long int scr=arr[k-1];
		long long int cnt=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]>=scr)
			{
				cnt++;
			}
			
		}
		cout<<cnt<<endl;
	}
}
