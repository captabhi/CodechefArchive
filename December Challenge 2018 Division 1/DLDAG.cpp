/* you're welcome
   © Abhishek Mishra
*/
#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define xdiv 1000000007
#define mset(arr,val) memset(arr,val,sizeof(arr));
#define endl "\n"
#define noTest 1
typedef long long int lli;
typedef long double llf;
typedef long long ll;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	/*#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\ASUS\\Desktop\\input.txt","r",stdin);
        freopen("C:\\Users\\ASUS\\Desktop\\output.txt","w",stdout);
    #endif
    */
	int t=1;
    if(!noTest)  cin>>t;
	while(t--)
	{
	ll n,m;
	cin>>n>>m;
	vector<pair<ll,ll> arr;
	ll arrcnt[n];
	mset(arrcnt,-1);
	ll temp1,temp2;
	For(i,0,m)
	{
		cin>>temp1>>temp2;
		arr.push_back(make_pair(temp1,temp2));
		arrcnt[temp1]=1;
	}
	while(!arr.empty())
	{
	vector<ll> vect;
	For(i,1,n+1)
	{
		if(arrcnt[i]==-1)
		{
			cnt++;
			vect.push_back(i);
		}
	}
	for(auto i=vect.begin();i!=vect.end();i++)
	{
		ll temp=*i;
		for(auto j=arr.begin();j!=arr.end();j++)
		{
			if(j->second==temp)
			{
				arr.erase(j);
			}
		}
	}
	
	}
	}


}


