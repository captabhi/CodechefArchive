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
typedef unsigned long long int ulli;
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
	lli t=1;
    if(!noTest)  cin>>t;
	while(t--)
	{
		ulli n;
		cin>>n;
		ulli days[n];
		ulli doby,dobm,dobd,cury,curm,curd;
		ulli ans=0,yrcnt=0;
		For(i,0,n)
		{
			cin>>days[i];
			yrcnt+=days[i];
		}
			cin>>doby>>dobm>>dobd;
			cin>>cury>>curm>>curd;
			if(cury==doby&&curm==dobm)
			{
				ans+=(curd-dobd+1);
			}
			else if(cury-doby>0)
			{
				ans+=(days[dobm-1]-dobd)+1;
				//cout<<ans<<endl;
				For(i,dobm,n)
				{
					ans+=days[i];
				}
				//cout<<ans<<endl;
				if(doby%4==0)
					ans++;
				doby++;
				ans=ans-((doby-1)/4)+((cury-1)/4);
				//cout<<"Leap Year "<<ans<<endl;
				ans+=(yrcnt*(cury-doby));
				//cout<<"All year added "<<ans<<endl;
				For(i,0,curm-1)
				{
					ans+=days[i];
				}
				//cout<<"Months "<<ans<<endl;
				ans+=(curd);
				//cout<<" days "<<ans<<endl;

			}
			else
			{
				ans+=(days[dobm-1]-dobd)+1;
				For(i,dobm,curm-1)
				{
					ans+=days[i];
				}
				ans+=curd;

			}

			cout<<ans<<endl;
			//Leap year case




	}


}


