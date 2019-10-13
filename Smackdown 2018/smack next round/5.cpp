#include<bits/stdc++.h>
using namespace std;
int arr[302][302];
long long int dist[1000000];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		//memset(arr,-1,sizeof(arr));
		int n,m;
		char temp;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>temp;
				arr[i][j]=temp-'0';	
			}
			
		}
		memset(dist,0,sizeof(dist));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(arr[i][j]==1)
				{
					for(int a=0;a<n;a++)
					{
						for(int b=0;b<m;b++)
						{
							if(arr[a][b]==1)
							{
								int temp=abs(a-i)+abs(b-j);
								dist[temp]++;		
							}			
						}
					}
				}
			}
		}
		for(int i=1;i<=n+m-2;i++)
		{
			cout<<dist[i]/2<<" ";
			}	
			cout<<"\n";
	}
}
