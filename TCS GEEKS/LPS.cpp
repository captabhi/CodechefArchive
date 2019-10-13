#include<bits/stdc++.h>
#define row 1001
#define col 1001
using namespace std;
int dp[row][col];
string s;
int max1(int a,int b)
{
	if(a<b)
	return b;
	else 
	return a;
}
int lps(int st,int end)
{
	if(st>end)
	{
		return 0;
	}
	else if(st==end)
	{
		return 1;
	}
	else if(dp[st][end]!=-1)
		{
			return dp[st][end];
		}
	else if(s[st]==s[end])
	{
		
		dp[st][end]= 2+lps(st+1,end-1);
		return dp[st][end];
	}
	else
	{
		dp[st][end]=max1(lps(st+1,end),lps(st,end-1));
		return dp[st][end];
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(dp,-1,sizeof(dp));
		cin>>s;
		int ans=lps(0,s.length()-1);
		cout<<ans<<endl;
		
	}
}
