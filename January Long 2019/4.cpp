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
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll a=0,b=0,c=0,val=n/3;
	For(i,0,n)
	{
		if(s[i]=='0')
		a++;
		if(s[i]=='1')
		b++;
		if(s[i]=='2')
		c++;
	}
	for(int i=n-1;i>=0;i--)
	{
		if(s[i]=='0')
		{
			if(a>val)
			{
				if(b<val)
				{
					s[i]='1';
					b++;
					a--;
				}
				else if(c<val)
				{
					s[i]='2';
					c++;
					a--;
				}
			}
			
		}
		if(s[i]=='1')
		{
			if(b>val)
			{
				if(a<val)
				{
					s[i]='0';
					a++;
					b--;
				}
				else if(c<val)
				{
					s[i]='2';
					c++;
					b--;
				}
			
			}
		}
		if(s[i]=='2')
		{
			if(c>val)
			{
				if(a<val)
				{
					s[i]='0';
					a++;
					c--;
				}
				else if(b<val)
				{
					s[i]='1';
					b++;
					c--;
				}
			
			}
		}
		
		
	}
	cout<<s<<endl;
	

	}


}


