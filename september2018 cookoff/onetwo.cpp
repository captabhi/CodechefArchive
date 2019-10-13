#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int prefix[n]={0},prefix1=0,prefix2=0,arr[n];
		cin>>arr[0];
		prefix[0]=arr[0];
		for(int i=1;i<n;i++)
		{
			cin>>arr[i];
			prefix[i]=arr[i]+prefix[i-1];
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]==1)
			{
				prefix1=prefix[n-1]-prefix[i-1];
				break;
			}
		}
		for(int i=n-1;i>=0;i--)
		{
			if(arr[i]==1)
			{
				prefix2=prefix[i];
				break;
			}
		}
	
		int max;
		if(prefix1>prefix2)
		max=prefix1;
		else max=prefix2;
			cout<<prefix[n-1]<<" "<<max<<endl;
		int cnt=prefix[n-1];
		if(cnt%2==0)
		{
			cnt-=(prefix[n-1]-max)/2;
			cnt--;
		}
		else
		{
			cnt-=(prefix[n-1]-max)/2;
			
		}
		cout<<cnt<<endl;
		
		
	}
}
