/* you're welcome
   © Abhishek Mishra
*/
#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define xdiv 1000000007
#define mset(arr,val) memset(arr,val,sizeof(arr));
#define endl "\n"
typedef long long int lli;
typedef long double llf;
using namespace std;
unsigned long long int  n,k;

int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{

	cin>>n>>k;
	//unsigned lli var=n/3;
	if(n==2)
	{
        double ans=1.0/2.0;
		printf("%f\n",ans);
		continue;
	}
	unsigned long long int n1,n2;
	while(n>0&&k>0)
	{
        n=n/2;
        k--;
	}

	if(n>0)
	{
        double ans=1.0/n;
		printf("%f\n",ans);
	}
	else
	{
        double ans=1.0/1.0;
		printf("%f\n",ans);
	}

	}


}


