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
        unordered_map<ll, vector<ll>> umap;
        unordered_map<ll, vector<ll>>::iterator itr;
		ll n;
        cin >> n;
        ll arr[n],c=0;
        For(i,0,n)
		{
			cin >> arr[i];
		 } 
        umap[arr[0]].push_back(0);
        For(i,1,n)
        {
            arr[i] = arr[i] ^ arr[i-1];
             if (!arr[i])
                 c += i;
            umap[arr[i]].push_back(i);
        } 
        for (itr = umap.begin(); itr != umap.end(); itr++)
        {
            ll len = itr->second.size();
            if(len>=2)
            {
                for(int i=len-1; i>=0; i--) 
                {
                       c+= i*itr->second[i] - (len-1-i)*(itr->second[i]+1);
                }
            }
        }
        cout<<c<<endl;
    }
}


