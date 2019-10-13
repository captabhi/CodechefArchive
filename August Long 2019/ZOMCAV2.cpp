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
    ll arr1[100007],arr2[100007],arr3[100007]; 
	int t=1;
    if(!noTest)  cin>>t;
	while(t--)
	{
			
		ll n,mark=1;
		cin>>n;
		mset(arr1,0);
		mset(arr2,0);
		mset(arr3,0);
		For(i,1,n+1)
		{
				cin>>arr1[i];
				ll a,b;
				if(i-arr1[i]<1){
					a=1;
				}	
				else{
					a=i-arr1[i];
				}	
				if(i+arr1[i]>n){
					b=n;
				}	
				else
				{
					b=i+arr1[i];
					 } 	
				arr3[a]++;
				arr3[b+1]--;
			
		}
		For(i,1,n+1){
			cin>>arr2[i];
		}
		sort(arr2+1,arr2+n+1);
		For(i,1,n+1)
		{	
		arr3[i]+=arr3[i-1];
		}
		sort(arr3+1,arr3+n+1);
	
		For(i,1,n+1)
		{
			if(arr2[i]!=arr3[i]){
				mark=0;
				break;	
			}	
		}
		if(mark==1)
		{
			cout<<"YES\n";	
		}
		else{
			cout<<"NO\n";	
		}	
	}
}


