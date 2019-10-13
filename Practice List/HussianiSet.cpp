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
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	int arr[n];
	queue<lli> q1,q2;
	For(i,0,n)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	
	for(int i=0;i<n;i++)
	{
		q1.push(arr[n-1-i]);
	}
	int temp,prevtemp=0,step=0;
	
	For(i,0,m)
	{
		cin>>temp;
		step=temp-prevtemp;
		For(j,0,step)
		{
		
			if(j==step-1)
			{
				if(q2.empty()==1)
				{
					cout<<q1.front()<<"\n";
				}
				else 
				{
					cout<<(q1.front()>q2.front()?q1.front():q2.front())<<"\n";
				}
			}
			if(q2.empty()==1)
			{
				int var=q1.front();
				q1.pop();
				var/=2;
				if(var>0)
				q2.push(var);		
			}
			else if(q1.front()>q2.front())
			{
				int var=q1.front();
				q1.pop();
				var/=2;
				if(var>0)
				q2.push(var);
			}
			else
			{
				int var=q2.front();
				q2.pop();
				var/=2;
				if(var>0)
				q2.push(var);
			}
		}
		
	}
	
	
}


