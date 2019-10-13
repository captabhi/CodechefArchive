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
		int arr[n+1]={0};
		int cnt=0;
		for(int i=1;i<=n;i++)
		{
			int temp;
			cin>>temp;
			if(temp>n)
			{
				cnt++;
				continue;	
			}
			else
			{
				
				arr[temp]++;
				if(arr[temp]>1)
				{
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
	}
}
