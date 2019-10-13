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
	
	int t;
    cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll Goal[n],Foul[n];
		For(i,0,n){
			cin>>Goal[i];	
		}
		For(i,0,n){
			cin>>Foul[i];	
		}
		ll smx=0;
		For(i,0,n){
			ll temp = 20*Goal[i] - 10*Foul[i];
			if(temp<0)
			temp=0;
			if(temp>smx)
			smx = temp;
		}
		cout<<smx<<endl;
	}
}


