/* you're welcome
   © Abhishek Mishra
*/
#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++)
typedef long long int lli;
typedef long double llf;
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n+1];
		arr[0]=0;
		for(int i=1;i<=n;i++)
		cin>>arr[i];
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i+1]-arr[i]>k)
			{
				int val=arr[i+1]-arr[i];
				if(val%k==0)
				{
					cnt+=(val/k-1);
				}
				else
				{
					cnt+=(val/k);
				}
			}
		}
		cout<<cnt<<endl;
	}


}

