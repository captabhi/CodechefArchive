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
	/*#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\ASUS\\Desktop\\input.txt","r",stdin);
        freopen("C:\\Users\\ASUS\\Desktop\\output.txt","w",stdout);
    #endif
    */
	int t=1;
    if(!noTest)  cin>>t;
	while(t--)
	{
	ll w,h,u1,d1,u2,d2;
	cin>>w>>h>>u1>>d1>>u2>>d2;
	
	while(h)
	{
		w+=h;	
		if(h==d1)
		{
			w-=u1;
			//continue;
			//cout<<"d1\n";
			}
		if(h==d2)
		{
			w-=u2;
			//cout<<"d2\n";
			//continue;
			}
			if(w<0)
			w=0;	
			//cout<<w<<endl;
			h--;	
	}
	if(w<0)
	{
		cout<<0<<endl;
	}
	else
	cout<<w<<endl;

	}


}


