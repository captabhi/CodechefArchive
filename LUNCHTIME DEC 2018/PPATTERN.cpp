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
		ll days[n];
		ll doby,dobm,dobd,cury,curm,curd;
		ll ans=0,yrcnt=0;
		For(i,0,n)
		{
			cin>>days[i];
			yrcnt+=days[i];
		}
			cin>>doby>>dobm>>dobd;
			cin>>cury>>curm>>curd;

			if(cury-doby>0)
			{
				ans+=(days[dobm-1]-curd);
				For(i,dobm,n)
				{
					ans+=days[i];
				}
				if(doby%4==0)
					ans++;
				doby++;
				ans=ans-(doby/4)+(cury-1/4);
				ans+=(yrcnt*(cury-doby));
				For(i,0,curm-1)
				{
					ans+=days[i];
				}
				ans+=(curd);

			}
			else
			{
				ans+=(days[dobm-1]-curd);
				For(i,dobm,curm-2)
				{
					ans+=days[i];
				}
				ans+=curd;
			}

			cout<<ans<<endl;
			//Leap year case




	}


}


