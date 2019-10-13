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
 long long int  n,k;

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
    long long int n1,n2,turn=0;
	while(k>0&&n>0)
	{
		n1=n/2;
		n2=n-n1;
		turn++;
		if(n1%2==1&&n2%2==1&&turn==1)
		{
			n1++;
			n2--;
		}

		if(n==2)
		{
        n=1;
        break;
		}
		n=max(n1,n2);
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



