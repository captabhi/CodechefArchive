/* you're welcome
   © Abhishek Mishra
*/
#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define xdiv 1000000007
#define mset(arr,val) memset(arr,val,sizeof(arr));
#define endl "\n"
typedef long long int lli;
typedef long double llf;
using namespace std;
int dp[1000001][2],arr[1000000],n;
int recur(int idx,int val)
{
	if(idx>=n)
	{
		return 0;
	}
	else if(val>1)
	{
		return INT_MAX;
	}
	else if(dp[idx][val]!=-1)
	{
		return dp[idx][val];
	}
	else
	{
		dp[idx][val]= min(arr[idx]+recur(idx+1,0),recur(idx+1,val+1));
		return dp[idx][val];
	}
	
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//mset(dp,0);
	//int n;
	cin>>n;
	For(i,0,n)
	{
	cin>>arr[i];
	dp[i][0]=dp[i][1]=-1;	
	}
	
	int ans=recur(0,0);
	cout<<ans<<endl;


}


