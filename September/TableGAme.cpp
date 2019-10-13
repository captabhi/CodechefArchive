#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		string m,n;
		cin>>n>>m;
		int ml=m.length(),nl=n.length();
		bool arr[ml+1][nl+1];
		arr[0][0]=0;
		//memset(arr,-1,sizeof(arr));
		for(int i=0;i<ml;i++)
		{
			arr[i+1][0]=m[i]-'0';
		}
		for(int j=0;j<nl;j++)
			{
				arr[0][j+1]=n[j]-'0';
			}
			/////////////////
			if(arr[1][0]==0||arr[0][1]==0)
			arr[1][1]=0;
			else
			arr[1][1]=1;
			/////////////////
			for(int j=2;j<=nl;j++)
				{
					if(arr[0][j]==0)
					arr[1][j]=0;
					else if(arr[1][j-1]==0)
					arr[1][j]=1;
					else
					arr[1][j]=0;
				}
			for(int j=2;j<=ml;j++)
				{
					
					if(arr[j][0]==0)
					arr[j][1]=0;
					else if(arr[j-1][1]==0)
					arr[j][1]=1;
					else
					arr[j][1]=0;
				}
			
			
	//////////////////////////////////////////
			for(int i=2;i<=ml;i++)
			{
				for(int j=2;j<=nl;j++)
				{
					if(arr[i][j-1]==1||arr[i-1][j]==1)
					{
						arr[i][j]=0;
					}
					else
					{
						arr[i][j]=1;
					}
				}
			}
			
			for(int i=0;i<=ml;i++)
			{
				for(int j=0;j<=nl;j++)
				{
					cout<<arr[i][j]<<" ";
				}
				cout<<endl;
			}
		
		int q;
		cin>>q;
		int arr2[q],l=0;
		while(q--)
		{
			int x,y;
			cin>>x>>y;
			if(arr[x][y]==1)
			{
				arr2[l]=0;
			}
			else 
			{
				arr2[l]=1;
			}
			l++;
			
		}
		for(int i=0;i<l;i++)
		{
			cout<<arr2[i];
		}
		cout<<"\n";
	}
}
