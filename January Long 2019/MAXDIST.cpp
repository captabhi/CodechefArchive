/* you're welcome
   � Abhishek Mishra
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
	#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\ASUS\\Desktop\\input.txt","r",stdin);
        freopen("C:\\Users\\ASUS\\Desktop\\output.txt","w",stdout);
    #endif
    
	int t=1;
    if(!noTest)  cin>>t;
	while(t--)
	{ 
	ll n;
	cin>>n;
	vector<pair<ll,ll>> vec;
		ll temp1,temp2;
	For(i,0,n)
	{
		cin>>temp1>>temp2;
		vec.push_back(make_pair(temp1,temp2));
		
	}
	ll q;
	cin>>q;
	while(q--)
	{
		ll maxdist=0;
		cin>>temp1>>temp2;
		For(i,temp1-1,temp2)
		{
			For(j,i+1,temp2)
			{
				ll dist=pow((vec[i].first-vec[j].first),2)+pow((vec[i].second-vec[j].second),2);
				if(dist>maxdist)
				maxdist=dist;
			}
		}
		cout<<maxdist<<endl;
	}

	}


}


