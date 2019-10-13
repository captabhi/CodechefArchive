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
ll n;
ll p[100000];
ll z[100000];
ll ans[100000];
		
void fun(){
	for(int i=1;i<=n;i++){
		int l,r;
		if(i-p[i]<1)	l=1;
		else	l=i-p[i];
		if(i+p[i]>n)	r=n;
		else 	r=i+p[i];
		for(int j=l;j<=r;j++){
			ans[j]++;
		}
	}
}
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
		mset(p,0);
		mset(z,0);
		mset(ans,0);
		cin>>n;
		For(i,0,n)
		{
			cin>>p[i+1];
		}
		For(i,0,n){
			cin>>z[i+1];
		}
		fun();
		
		For(i,1,n+1){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		
		
	
	
	}


}


