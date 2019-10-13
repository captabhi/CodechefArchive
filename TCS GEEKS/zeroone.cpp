#include<bits/stdc++.h>
using namespace std;
int n,wt,val;
int dp[2000][2000];
int arr1[101];
int arr2[101];
int max1(int a,int b)
{
	if(a>b)
	return a;
	else 
	return b;
}
int zeroone(int i,int wtr)
{
	
	//int ans;
	if(dp[i][wtr]!=-1)
	{
		//cout<<"1\n";
		return dp[i][wtr];
	}
	else if(wtr<=0||i>n-1)
	{
		//cout<<"2\n";
		return 0;
	}
	else if(arr2[i]>wtr)
	{
		//cout<<"3\n";
		dp[i][wtr]=zeroone(i+1,wtr);
		return dp[i][wtr];
	}
	else 
	{
		//cout<<"4\n";
		int var1,var2;
		var1=zeroone(i+1,wtr-arr2[i])+arr1[i];
		var2=zeroone(i+1,wtr);
		dp[i][wtr]=max1(var1,var2);
		//cout<<max1(var1,var2)<<" ";
		return dp[i][wtr];
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	cin>>n>>wt;
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	int val=zeroone(0,wt);
	cout<<val<<endl;
	/*for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
}
}
