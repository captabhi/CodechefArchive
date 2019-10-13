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
		int t=1;
	    if(!noTest)  cin>>t;
		while(t--)
		{
			ll A,B,C,D,E,F,xl,yl,xu,yu,ans;
			ll var=1000000000;
			cout<<"Q "<<0<<" "<<0<<endl<<flush;
			cin>>A;
			cout<<"Q "<<var<<" "<<0<<endl<<flush;
			cin>>B;
			cout<<"Q "<<var<<" "<<var<<endl<<flush;
			cin>>C;
			ll midptlx,midptly,xal,yal,xbl,ybl;
			midptlx=A-B+var;
			midptly=B-C+var;
			midptlx/=2;
			midptly/=2;
			cout<<"Q "<<midptlx<<" "<<midptly<<endl<<flush;
			cin>>D;
			xal=midptlx-D;
			yal=midptly;
			xbl=midptlx;
			ybl=midptly-D;
			cout<<"Q "<<xal<<" "<<yal<<endl<<flush;
			cin>>E;
			cout<<"Q "<<xbl<<" "<<ybl<<endl<<flush;
			cin>>F;
			if(E==0)
			{
				xl=xal;
				yl=A-xl;
			}
			else
			{
				yl=ybl;
				xl=A-yl;
			}
			xu=yl-B+var;
			yu=2*var-C-xu;
			cout<<"A "<<xl<<" "<<yl<<" "<<xu<<" "<<yu<<endl<<flush;
			cin>>ans;
			
			
		}
	
	
	}
	

