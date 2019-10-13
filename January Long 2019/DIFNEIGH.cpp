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
		ll n,m;
	cin>>n>>m;
	
	

	ll arr[n][m];
	int cnt=0,cnt2=0,one,two;
	if(n==1&&m==1)
	{
		cout<<1<<endl;
		cout<<1<<endl;
	}
	else if((n==1&&m!=2)||(m==1&&n!=2))
	{
		one=1,two=2;
		if(n==1)
		{
			cout<<2<<endl;
			cout<<one<<" ";
			For(i,1,m)
			{
				if(cnt2==0||cnt2==1)
				cout<<two<<" ";
				else
				cout<<one<<" ";
				cnt2++;
				cnt2=cnt2%4;
			}
			cout<<endl;
		}
		else if(m==1)
		{
			cout<<2<<endl;
			cout<<one<<endl;
			n--;
			while(n--)
			{
				if(cnt2==0||cnt2==1)
				cout<<two<<"\n";
				else
				cout<<one<<"\n";
				cnt2++;
				cnt2=cnt2%4;
			}
		}
	}
	else if(n==1&&m==2)
	{
		cout<<1<<endl;
		cout<<1<<" "<<1<<endl;
	}
	else if(n==2&&m==1)
	{
		cout<<1<<endl;
		cout<<1<<endl;
		cout<<1<<endl;
	}
	else if(n==2&&m==2)
	{
	cout<<2<<endl;
	cout<<1<<" "<<2<<endl;
	cout<<1<<" "<<2<<endl;	
	}
	else if(n<3)
	{
		
		int cnt=0;
		cout<<"3\n";
		while(n--)
		{
		cnt=0;
		For(j,0,m)
		{
			if(cnt==0)
			cout<<1<<" ";
			else if(cnt==1)
			cout<<2<<" ";
			else if(cnt==2)
			cout<<3<<" ";
			cnt++;
			cnt=cnt%3;
		}
		cout<<endl;
		}
		
	}
	else if(m<3)
	{
		
		int cnt=1;
		cout<<"3\n";
		while(n--)
		{
		
		for(int i=0;i<m;i++)
		{
			cout<<cnt<<" ";
		}
		cnt++;
		cnt=(cnt%3)+1;
		cout<<endl;
		}
		
	}
	else
	{
	
	cout<<"4\n";
	For(i,0,n)
	{
		cnt=cnt%4;
		cnt2=0;
		if(cnt==0)
		{
			one=1;
			two=2;
		}
		else if(cnt==1)
		{
				one=3;
				two=4;
		}else if(cnt==2)
		{
			one=2;
			two=1;
		}else if(cnt==3)
		{
			one=4;
			two=3;
		}
		cout<<one<<" ";
		For(j,1,m)
		{
			
			 if(cnt2==0||cnt2==1)
				cout<<two<<" ";
			else if(cnt2==2||cnt2==3)
				cout<<one<<" ";
			cnt2++;
			cnt2=cnt2%4;
		}
		cout<<endl;
		cnt++;
	}
	
	}
	}


}


