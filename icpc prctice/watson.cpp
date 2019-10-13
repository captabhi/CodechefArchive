/* you're welcome
   © Abhishek Mishra
*/
#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define xdiv 1000000007
#define mset(arr,val) memset(arr,val,sizeof(arr));
typedef long long int lli;
typedef long double llf;
using namespace std;
lli xmin(lli a,lli b)
{
 return a<b?a:b;
}
lli xmax(lli a,lli b)
{
 return a<b?b:a;
}

int digitsum(int a)
{
	int sum=0;
	while(a)
	{
		
		sum+=(a%10);
		a=a/10;
	}
	return sum;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{

	int d;
	cin>>d;
	cout<<digitsum(d+1)<<endl;

	}


}

