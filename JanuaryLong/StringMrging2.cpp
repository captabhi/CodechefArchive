#include<iostream>
using namespace std;
int arr[5010][5010];
int count(string a,string b,int n,int m)
{
	int i,j;
	arr[0][0]=0;
	arr[0][1]=1;
	for(j=1;j<=m;j++)
	{
		if(b[j]==b[j-1])
		{
		arr[0][j+1]=arr[0][j];	
		}
		else
		{
			arr[0][j+1]=arr[0][j]+1;
		}
	}
	arr[1][0]=1;
	for(j=1;j<=n;j++)
	{
		if(a[j+1]==a[j])
		{
		arr[j+1][0]=arr[j][0];	
		}
		else
		{
			arr[j+1][0]=arr[j][0]+1;
		}
	}

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(a[i-1]==b[j-1])
			{
				arr[i][j]=min(arr[i][j-1],arr[i-1][j]);
			}
			else
			{
				arr[i][j]=1+min(arr[i][j-1],arr[i-1][j]);
			}
		}
	}
	
  	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			cout<<arr[i][j]<<" ";
	
	    }
	    cout<<"\n";
	
	}
		
	return arr[n][m];	
}
int main()
{
		int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		string s,t;
		cin>>s>>t;
		int x=count(s,t,n,m);
		cout<<x<<endl;
	}
}
