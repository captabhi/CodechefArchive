/* you're welcome
   © Abhishek Mishra
*/
#include<bits/stdc++.h>
#define int int64_t
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define xdiv 1000000007
#define mset(arr,val) memset(arr,val,sizeof(arr));
#define endl "\n"
#define noTest 0
using namespace std;
int n,x,ans;
int arr[100009];
vector<long long> v[100009];

int fun2(int idx)
{
	if(v[idx].size()==0)
	{
		
		return max(-x,arr[idx]);
	}
	else 
	{
	   int temp =arr[idx];
		For(i,0,v[idx].size())
			{
				//cout<<"Showing node at "<<idx<<" having value "<<v[idx].at(i)<<"Final value is "<<arr[idx]<<"\n";
				temp+=fun2(v[idx].at(i)); 
		 	}
			 return max(-x,temp);
	}

}
signed main()
{
	/*ios_base::sync_with_stdio(false);
	cin.tie(NUint);
	#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\ASUS\\Desktop\\input.txt","r",stdin);
        freopen("C:\\Users\\ASUS\\Desktop\\output.txt","w",stdout);
    #endif
    */
	int t=1;
    if(!noTest)  cin>>t;
	while(t--)
	{
		
		cin>>n>>x;
		For(i,0,n+5)
		{	
			v[i].clear();
		}
		 int a,b;
		For(i,0,n)
		{
			cin>>arr[i+1];	
		}
		
		For(i,0,n-1)
		{
			cin>>a>>b;
			v[a].push_back(b);
			
		}
		ans = fun2(1);
		cout<<ans<<endl;

	}


}

