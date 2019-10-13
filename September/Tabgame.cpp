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
		int arr[n][n],arr2[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>arr[i][j];
				arr2[i][j]=0;
			}
		}
		int q;
		cin>>q;
		while(q--)
		{
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			for(int i=a-1;i<c;i++)
			{
				for(int j=b-1;j<d;j++)
				{
					arr[i][j]+=1;
				}
			}
		}
		
		
			
	}
}
