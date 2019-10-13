#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
			int n,cnt=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(arr[i]%2==0&&arr[j]%2==0)
				{
					if((arr[i]^arr[j])>2)
					{
						cnt++;
					}
				}
				else if(arr[i]%2==1&&arr[j]%2==1)
				{
					if((arr[i]^arr[j])>2)
					{
						cnt++;
					}
				}
			}
		}
		cout<<cnt<<endl;		
	}
	
}
