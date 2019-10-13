/* you're welcome
   © Abhishek Mishra
*/
#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define xdiv 1000000007
#define mset(arr,val) memset(arr,val,sizeof(arr));
#define endl "\n"
#
typedef long long ll;
typedef long double llf;
using namespace std;
ll n,c;
ll binary(ll l,ll h,ll coins,ll m)
{
	if(l>=h)
	{
		return m;
	}
	else
	{
		ll ans;
		ll mid= (l+h)/2;
		cout<<"1 "<<mid<<endl;
		cin>>ans;
		if(ans==0)
		{
			if(coins>=1)
			{
				coins--;
				ll val=binary(mid+1,h,coins,mid);
				return val;
					
			}
			else
			{
				return m;
			}
			
		}
		else if(ans==1)
		{
			if(coins>=c)
			{
				coins-=c;
				cout<<"2\n";
				ll val=binary(l,mid-1,coins,m);	
				return val;
			}
			else return m;	
		}
		else
		{
			return m;
		}
		
	}
}
int main()
{
	/*#ifndef ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#endif
	*/
	/*#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\ASUS\\Desktop\\input.txt","r",stdin);
        freopen("C:\\Users\\ASUS\\Desktop\\output.txt","w",stdout);
    #endif
    */
	cin>>n>>c;
	ll val=binary(1,n,1000,1);
	cout<<"3 "<<val<<endl;
}


