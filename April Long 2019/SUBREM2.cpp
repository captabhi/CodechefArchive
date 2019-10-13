#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define endl "\n"
#define noTest 0
const int  maxn = 1e5 + 42;

using namespace std;
int x;
int arr[maxn];
vector<int> v[maxn];
int dfs(int idx = 1, int p = 1) {
	int res = 0;
	for(auto nxt: v[idx]) {
		if(nxt != p) {
			res += dfs(nxt, idx);
		}
	}
	return max(arr[idx] + res, -x);
}
void init()
{
	For(i,0,maxn)
		{	
			v[i].clear();
		}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
    cin>>t;
	while(t--)
	{
		
		int n;
		init();
		cin>>n>>x;
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];	
		}
		for(int i=1;i<n;i++)
		{
			int a,b;
			cin>>a>>b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		cout<<dfs()<<endl;

	}
	return 0;


}


