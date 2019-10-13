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
		ll cnt[26],flag[26];
		mset(cnt,0);
		mset(flag,0);
		string s;
		For(i,0,n)
		{
			cin>>s;
			mset(flag,0);
			For(j,0,s.length())
			{
				ll temp=s[j]-'a';
				if(flag[temp]==0)
				{
				cnt[temp]++;
				flag[temp]=1;	
				}
			}
		}
		ll acnt=0;
		For(i,0,26)
		{
			if(cnt[i]>=n)
			{
				acnt++;
			}
		}
		cout<<acnt<<endl;

	}


}


