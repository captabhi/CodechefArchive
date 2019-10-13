/* you're welcome
   © Abhishek Mishra
*/
#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define xdiv 1000000007
#define mset(arr,val) memset(arr,val,sizeof(arr));
#define endl "\n"
#define noTest 0
#define maxn 100009
typedef long long int lli;
typedef long double llf;
typedef long long ll;
using namespace std;
ll n,x;
ll arr[maxn];
vector<ll> v[maxn];

ll fun2(ll idx,ll p)
{
	
	   ll temp = 0;
			for(auto nxt:v[idx])
			{
				//cout<<"Showing node at "<<idx<<" having value "<<v[idx].at(i)<<"Final value is "<<arr[idx]<<"\n";
				if(p!=idx)
				temp+=fun2(nxt,idx); 
		 	}
			 return max(-x,temp+arr[idx]);
	
}
ll dfs(ll idx = 1, ll p = 1) {
	ll res = 0;
	for(auto nxt: v[idx]) {
		if(nxt != p) {
			res += dfs(nxt, idx);
		}
	}
	return max(arr[idx] + res, -x);
}
int main()
{
/*	ios_base::sync_with_stdio(false);
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
		//mset(arr,0);
		cin>>n>>x;
		For(i,0,maxn)
		{	
			v[i].clear();
		}
		For(i,1,n+1)
		{
			cin>>arr[i];	
		}
		//ll startnode=1;
		long long int a,b;
		For(i,1,n)
		{
			cin>>a>>b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		
		cout<<dfs(1,1)<<endl;

	}


}

