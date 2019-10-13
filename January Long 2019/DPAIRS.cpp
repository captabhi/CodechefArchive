/* you're welcome
   © Abhishek Mishra
*/
#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define xdiv 1000000007
#define mset(arr,val) memset(arr,val,sizeof(arr));
#define endl "\n"
#define noTest 1
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
	int t=1;
    if(!noTest)  cin>>t;
	while(t--)
	{
	 vector <pair<lli ,lli> > vec1,vec2;
	lli  n,m,temp;
	cin>>n>>m;
	For(i,0,n)
	{
		cin>>temp;
		vec1.push_back(make_pair(temp,i));
	}
	For(i,0,m)
	{
		cin>>temp;
		vec2.push_back(make_pair(temp,i));
	}
	
	sort(vec1.begin(),vec1.end());
	sort(vec2.begin(),vec2.end());
	
		For(i,0,n)
		{
			cout<<vec1[i].second<<" "<<vec2[0].second<<endl;
		}
		For(i,1,m)
		{
			cout<<vec1[n-1].second<<" "<<vec2[i].second<<endl;
		}
	}


}


