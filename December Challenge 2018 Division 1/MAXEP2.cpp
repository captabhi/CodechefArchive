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
ll n,c;
ll stepsize=1000;

ll func(ll beg,ll end,ll stepszie,ll coins)
{
	ll ans;
	ll val;
	//cout<<"Inside Funce "<<beg<<" "<<end<<" "<<stepsize<<" "<<coins<<endl;
	for(int i=beg;i<=end;i+=stepsize)
		{
			cout<<"1 "<<i<<endl<<flush;
			cin>>ans;
			if(ans==0)
			{
				coins--;
			}
			else if(ans==1)
			{
				coins-=c;
				cout<<"2\n"<<flush;
				if(stepsize!=1)
				{
					//cout<<"Func\n";
					stepsize/=10;
					if(i-(stepsize*10)+1<0)
					{
						return i;
					}else
					{
						val = func(i-(stepsize*10)+1,i,stepsize,coins);
					break;	
					}	 	
				}
				else
				{
					return i;
				}		
			}
			else if(ans==2)
			{
				return i;
			}
			while(i+stepsize>=end&&stepsize!=1)
			{
				stepsize/=10;
			}				
		}
		return val;	
}
int main()
{
	/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
        freopen("/Users/jaybansal/Desktop/acmin.txt","r",stdin);
        freopen("/Users/jaybansal/Desktop/acmout.txt","w",stdout);
    #endif
    */
	int t=1;
    if(!noTest)  cin>>t;
	while(t--)
	{
	ll ans;
	cin>>n>>c;
	if(n<=10)
	stepsize=1;
	else if (n<=100)
	stepsize = 10;
	else if (n<=1000)
	stepsize=100;
	else if(n<=10000)
	stepsize=1000;
	else 
	stepsize=10000;
	
	if(n==1)
	cout<<"3 "<<1<<endl<<flush;
	else
	{
		ll val = func(1,n,stepsize,999);
		cout<<"3 "<<val<<endl<<flush;
	}
	
	}


}


