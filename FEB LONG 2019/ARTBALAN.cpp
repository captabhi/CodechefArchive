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
        //freopen("C:\\Users\\ASUS\\Desktop\\output.txt","w",stdout);
    #endif
    
	int t=1;
    if(!noTest)  cin>>t;
	while(t--)
	{
		
		string s;
		cin>>s;
		ll n=s.length(),varcnt=0;
		ll flag=0;
		ll chcnt[26];
		ll steps,minsteps=INT_MAX;
		mset(chcnt,0);
		For(i,0,n)
		{
			chcnt[s[i]-'A']++;
		}
	//	cout<<n<<endl;
		
		For(i,0,26)
		{
			if(chcnt[i]>0)
			varcnt++;
		}
		sort(chcnt,chcnt+26,greater<int>());
		/*For(i,0,26)
		cout<<chcnt[i]<<" ";
		cout<<endl;
		*/
		//cout<<varcnt<<endl;			
			for(int i=1;i<=n&&i<=26;i++)
			{
				
				if(n%i==0)
				{
					ll avgval=n/i;
					steps=0;
					if(varcnt==i)
					{
						sort(chcnt,chcnt+26,greater<int>());
						
						For(j,0,varcnt)
						{
						if(chcnt[j]<=avgval)
						break;
						steps+=(chcnt[j]-avgval);
						}
						
						//cout<<"1st "<<i<<" "<<steps<<endl;
					}
					else if(i<varcnt)
					{
						sort(chcnt,chcnt+26);
						
						For(j,25-i+1,26)
						{
							if(chcnt[j]>=avgval)
							break;
							steps+=abs(chcnt[j]-avgval);
								
						}
						//cout<<"2st "<<i<<" "<<steps<<endl;						
					}
					else
					{
					//	cout<<" Running for "<<i<<endl;
						sort(chcnt,chcnt+26,greater<int>());
						For(j,0,varcnt)
						{
						if(chcnt[j]<=avgval)
						break;	
						steps+=abs(chcnt[j]-avgval);	
						}
						
						//cout<<"3st "<<i<<" "<<steps<<endl;
						
					}
					if(steps<minsteps)
					minsteps=steps;		
				}
				
			}
			cout<<minsteps<<endl;		
		}
		
	}



