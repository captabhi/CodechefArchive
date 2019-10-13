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

 ll a[100005];
 ll tree[4*100005];

void buildTree(ll node,ll s,ll e)
{
	if(s==e)
	{
		tree[node]=a[s];
	}
	else
	{
		ll mid=(s+e)/2;
		buildTree(2*node,s,mid);
		buildTree(2*node+1,mid+1,e);
		tree[node]=min(tree[2*node],tree[2*node+1]);
	}
}

void update(ll node,ll s,ll e,ll idx,ll val)
{
	if(s==e)
	{
		a[idx]=val;
		tree[node]=val;
		//cout<<"Crashed\n";
	}
	else
	{
	
	ll mid=(s+e)/2;
	if(idx<=mid&&idx>=s)
	{
		update(2*node,s,mid,idx,val);
	}
	else
	{
		update(2*node+1,mid+1,e,idx,val);
	}
	tree[node]=min(tree[2*node],tree[2*node+1]);
   }
}
ll query(ll node,ll s,ll e,ll l,ll r)
{
	if(r<s|| l>e)
	{
		return INT_MAX;
	}
	else if(s>=l&&e<=r)
	{
		return tree[node];
	}
	else
	{
		ll mid =(s+e)/2;
		ll p1=query(2*node,s,mid,l,r);
		ll p2=query(2*node+1,mid+1,e,l,r);
		return min(p1,p2);
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
	ll n,q,temp;
	cin>>n>>q;
	For(i,1,n+1)
	{
		cin>>a[i];
	}
	ll len=n;
	mset(tree,-1);
	buildTree(1,1,len);
	//cout<<"Done\n";
	
	char ab;
	For(i,0,q)
	{
		cin>>ab;
		if(ab=='q')
		{
			ll a,b;
			cin>>a>>b;
			cout<<query(1,1,len,a,b)<<endl;
		}
		else
		{
			ll a,b;
			cin>>a>>b;
			update(1,1,len,a,b);
		}
	}
	

	}


}


