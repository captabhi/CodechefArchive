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
	ll n;
	cin>>n;
	if(n==1)
	cout<<2<<endl;
	else if(n==2)
	cout<<3	<<endl;
	else
	{
		
		ll val=sqrt(n);
		if(val*val>=n)
		{
			cout<<val+val<<endl;
		}
		else if((val+1)*val>=n)
		{
			cout<<val+val+1<<endl;
		}
		else
		cout<<val+val+2<<endl;
	}
	

	}


}


