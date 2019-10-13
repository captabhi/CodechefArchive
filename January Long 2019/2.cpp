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
		ll n,k;
		cin>>n>>k;
		int arr[5002];
		int val[n];
		mset(arr,0);
		ll temp;
		For(i,0,n)
		{
			cin>>temp;
			val[i]=temp;
			arr[temp]++;
		}
		int flag=0;
		For(i,0,5001)
		{
			if(arr[i]>k)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"NO\n";
		}
		else 
		{
			cout<<"YES\n";
			For(i,0,n)
			{
				cout<<arr[val[i]]<<" ";
				arr[val[i]]--;
					}
					cout<<endl;		
		}
		
	}


}


