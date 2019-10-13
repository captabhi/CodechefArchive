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

//unordered_map <int,int> freq;
int arr[100000];

int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int n,q,k;
	cin>>n>>q>>k;
	int cnt=0,maxcnt=0;
	 queue <int> q1;
	 cin>>arr[n-1];
	 q1.push(arr[n-1]);
	for(int i=n-2;i>=0;i--)
	{
		cin>>arr[i];
		//cout<<arr[i]<<endl;
		if(arr[i]==1&&q1.back()>0)
		{
			q1.back()++;
		}
		else 
		{
			q1.push(arr[i]);
			cout<<q1.back()<<endl;
		}
	}
	for(int i=0;i<=q1.size();i++)
	{
		cout<<q1.front();
		q1.pop();
	}
	/*while(q--)
	{
		char ch;
		cin>>ch;
		if(ch=='?')
		{
			int m1=leftcount()
			
		}
	}
	*/

}


