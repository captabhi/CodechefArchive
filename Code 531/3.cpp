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
		string s;
		ll k;
		cin>>s>>k;
		ll var=s.length();
		ll cnta=0,cntb=0,cntc=0;
		For(i,0,s.length())
		{
			if(s[i]=='?')
			cnta++;
			else if(s[i]=='*')
			cntb++;
			else
			cntc++;
		}
		if(k==(cntc))
		{
			For(i,0,s.length())
			{
				if(s[i]!='?'&&s[i]!='*')
				cout<<s[i];
			}
			cout<<endl;
		}
		else if(k<(cntc-cnta-cntb))
		{	
				cout<<"Impossible\n";	
		}
		else if(cntb==0&&k>(cntc))
		cout<<"Impossible\n";
		else
		{
			ll temp=cntc-k;
			if(temp>0)
			{
				For(i,0,s.length())
				{
					if((s[i+1]=='?'||s[i+1]=='*')&&temp>0)
					{
						temp--;
					}
					else if((s[i]!='?'&&s[i]!='*'))
					{
						cout<<s[i];
					}
					
				}
				cout<<endl;
			}
			else
			{
				For(i,0,s.length())
				{
					
					if(s[i]=='*')
					{
						while(temp<0)
						{
							cout<<s[i-1];
							temp++;
						}	
						
					}
					if(s[i]!='?'&&s[i]!='*')
					cout<<s[i];
					
				}
				cout<<endl;
			}
		}
		

	}


}


