#include<iostream>
using namespace std;
int arr[5010][5010];
int count(string a,string b,int n,int m)
{
	int i,j;
	for(i=0;i<=n;i++)
	arr[i][0]=0;
	for(i=0;i<=n;i++)
	arr[0][i]=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(a[i-1]==b[j-1])
			{
				arr[i][j]=1+max(arr[i][j-1],arr[i-1][j]);
			}
			else
			{
				arr[i][j]=max(arr[i][j-1],arr[i-1][j]);
			}
		}
	}
	
  	/*for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			cout<<arr[i][j]<<" ";
	
	    }
	    cout<<"\n";
	
	}
	*/
	
	
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
		cout<<(n+m)-x<<endl;
	}
}
