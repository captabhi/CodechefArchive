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
	/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\ASUS\\Desktop\\input.txt","r",stdin);
        freopen("C:\\Users\\ASUS\\Desktop\\output.txt","w",stdout);
    #endif
    */
	long long int r=1;
    if(!noTest)  cin>>r;
	while(r--)
	{
	lli N,t,x,y,z;
	cin>>N>>t>>x>>y>>z;
	lli a=2*N+1;
	lli n,m;
	if(t==1)
	{
		if((x<y&&y<z))
		{
			m=a-z;
			n=a;	
		}
		else if((x>y&&y>z))
		{
			 m=a-z;
			 n=a;
		}
		else 
		{
			m=z;
			n=a;
		}
		
	}
	else if(t==2)
	{
		if((x<y&&y<z)||(x>y&&y>z))
		{
			
			m=a-(2*y);
			n=a;	
		}
		else 
		{
			m=0;
			n=a;
		}
		
		
	}
	else if(t==3)
	{
		
		if((x<y&&y<z))
		{
			ll min1=min(x,min(y,z));
			x=min1;
			m=a-x;
			n=a;		
		}
		else if((x>y&&y>z))
		{
			ll max1=max(x,max(y,z));
			z=max1;
			m=a-z;
			n=a;
			
		}
		else if(x==0&&y==1&&z==2)
		{
			m=1;
			n=1;
		}
		else 
		{
			m=x;
			n=a;
		}
				
	}
	else if(t==4)
	{
		
		if((x<y&&y<z)||(x>y&&y>z))
		{
			
			m=a-(2*y);
			n=a;		
		}
		else 
		{
			m=0;
			n=a;
		}
	}
	lli  gcd=__gcd(m,n);
	cout<<m/gcd<<" "<<n/gcd<<endl;

	}


}


