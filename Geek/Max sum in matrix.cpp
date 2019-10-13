/* you're welcome
   © Abhishek Mishra
*/
#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define xdiv 1000000007
#define mset(arr,val) memset(arr,val,sizeof(arr));
#define endl "\n"
#define noTest 0
typedef long long int lli;
typedef long double llf;
typedef long long ll;
using namespace std;
int arr[20][20],dp[20][20],n;
int fun(int i,int j)
{
	if(j>n-1||j<0)
	return -1;
	else if(i==n-1)
	{
		return arr[i][j];
	}
	if(dp[i][j]!=0)
	{
		return dp[i][j];
	}
	else
	{
		int temp1=0,temp2=0,temp3=0;
		temp1=fun(i+1,j);
		if(j+1<=n-1)
		temp2=fun(i+1,j+1);
		if(j-1>=0)
		temp3=fun(i+1,j-1);
		dp[i][j]=arr[i][j]+max(fun(i+1,j),max(fun(i+1,j-1),fun(i+1,j+1)));
		return dp[i][j];
	}
}
int main()
{
	/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\ASUS\\Desktop\\input.txt","r",stdin);
        freopen("C:\\Users\\ASUS\\Desktop\\output.txt","w",stdout);
    #endif
    */
	int t=1;
    if(!noTest)  cin>>t;
	while(t--)
	{
	mset(dp,0);
	cin>>n;
	For(i,0,n)
	{
		For(j,0,n)
		{
			cin>>arr[i][j];
			//cout<<arr[i][j]<<" ";		
		}
		//cout<<endl;
	}
	ll max1=0;
	For(i,0,n)
	{
		ll temp=fun(0,i);
		//dp[0][i]=temp+=arr[0][i];
		//cout<<dp[0][i]<<endl;
		if(dp[0][i]>max1)
		max1=dp[0][i];	
	}
	
	cout<<max1<<endl;
	

	}


}


