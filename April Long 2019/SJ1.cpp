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
ll m[100001];
vector<int> v[100001];
ll vi[100001];
ll gcd[100001];
ll l[100001];
ll cnt=0;
ll n;
void fun(int idx,ll prev_gcd,int prev_idx)
{
	if(v[idx].size()==0)
	{
		ll temp;
		temp = __gcd(prev_gcd,vi[idx]);
		temp = __gcd(m[idx],temp);
		l[idx] = m[idx] - temp;
		//l[idx] = l[idx]%m[idx];
		//cout<<vi[idx]<<" ";
		
	}
	else if(v[idx].size()==1)
	{
		if(idx!=1)
		{
			ll temp;
			temp = __gcd(prev_gcd,vi[idx]);
			temp = __gcd(m[idx],temp);
			l[idx] = m[idx] - temp;
		}
	}
	else
	{
		ll temp = __gcd(prev_gcd,vi[idx]);
		For(i,0,v[idx].size())
		{
			ll j = v[idx].at(i);
			if(j!=prev_idx)
			{
				fun(j,temp,idx);	
			 } 
				
		 } 
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
	mset(l,-1);
	cin>>n;
	int a,b;
	cnt=0;
	For(i,0,n-1)
	{
			cin>>a>>b;
			v[a].push_back(b);
			v[b].push_back(a);
	}
	For(i,0,n)
	{
		cin>>vi[i+1];	
	}	
	For(i,0,n)
	{
		cin>>m[i+1];	
	}
	//cout<<"Done\n";
	
	fun(1,vi[1],1);
	
	//cout<<"Done\n";
	For(i,1,n+1)
	{
		if(l[i]!=-1)
		cout<<l[i]<<" ";
	}
	cout<<endl;
	}


}


