/* you're welcome
   © Abhishek Mishra
*/
#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define xdiv 1000000007
#define mset(arr,val) memset(arr,val,sizeof(arr));
#define endl "\n"
//  int xdiv=1000000007;
typedef long long int lli;
typedef long double llf;
using namespace std;
int n;
int arr[1001];

// Returns factorial of n

int main()
{
	/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	*/
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		unsigned long long int cnt=0,tot;
		tot=pow(2,n)%xdiv;
		cnt=pow(2,n-1)%xdiv;
		cout<<(tot-cnt-1)%xdiv<<endl;

	}


}


