/* you're welcome
   � Abhishek Mishra
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
		ll n;
		cin>>n;
		ll arr[n];
		For(i,0,n)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n,greater<int>());
		ll num1=0,num2=0;
		For(i,0,n)
		{
			if(num1<num2)
			{
				num1+=arr[i];
			}
			else
			{
				num2+=arr[i];
			}
		}
		cout<<abs(num1-num2)<<endl;

	}


}

