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
		cout<<"Q "<<0<<" "<<0<<endl;
		cin>>A;
		cout<<"Q "<<var<<" "<<0<<endl;
		cin>>B;
		cout<<"Q "<<var<<" "<<var<<endl;
		cin>>C;
		cout<<"Q "<<0<<" "<<var<<endl;
		cin>>D;
		ll ptlx,ptly,ptrx,ptry;
		ptlx=A+D-var;
		ptly=A-D+var;
		ptlx/=2;
		ptly/=2;
		if(ptlx<0)
		ptlx=0;
		if(ptlx>var)
		ptlx=var;
		if(ptly<0)
		ptly=0;
		if(ptly>var)
		ptly=var;
		cout<<"Q "<<ptlx<<" "<<ptly<<endl;
		cin>>E;
		xl=ptlx+E;
		yl=A-xl;
		ptrx=D-C+var;
		ptry=3*var-C-D;
		ptrx/=2;
		ptry/=2;
		if(ptrx<0)
		ptrx=0;
		if(ptrx>var)
		ptrx=var;
		if(ptry<0)
		ptry=0;
		if(ptry>var)
		ptry=var;
		cout<<"Q "<<ptrx<<" "<<ptry<<endl;
		cin>>F;
		yu=ptry-F;
		xu=2*var-C-yu;
		cout<<"A "<<xl<<" "<<yl<<" "<<xu<<" "<<yu<<endl;
		cin>>ans;
		
	}


}


