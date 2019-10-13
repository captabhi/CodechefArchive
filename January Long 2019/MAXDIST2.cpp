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
 
ll cross(pair<ll,ll>P,pair<ll,ll>Q,pair<ll,ll> R)//if return >0 then point R is upper of lineseg PQ else down
    {
        return  (Q.first-P.first)*(R.second-P.second)-(R.first-P.first)*(Q.second-P.second);
    }
void hull(vector<pair<ll,ll> > &P,vector<pair<ll,ll> > &L,vector<pair<ll,ll> > &U)
    {
        int j=0,k=0,n=P.size();
        sort(P.begin(),P.end());
        U.resize(2*n);
        L.resize(2*n);
        for(int i=0;i<n;i++)
         {
            while(j>=2 && cross(L[j-2],L[j-1],P[i])<=0)//p[i] is making right turn we need left turn
                j--;
            while(k>=2 && cross(U[k-2],U[k-1],P[i])>=0)//p[i] is making left turn we need right
                k--;
            L[j++]=P[i];
            U[k++]=P[i];
        }
        U.resize(k);
        L.resize(j);
    }
ll fun(pair<ll,ll> P ,pair<ll,ll> Q)
    {
        return (P.first-Q.first)*(P.first-Q.first)+(P.second-Q.second)*(P.second-Q.second);
    }

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
		
		ll n;
		cin>>n;
		vector<pair<ll,ll>> vec,L,U,v;
			ll temp1,temp2;
		For(i,0,n)
		{
			cin>>temp1>>temp2;
			vec.push_back(make_pair(temp1,temp2));
			
		}
		ll q;
		cin>>q;
		while(q--)
		{
			U.clear();
			L.clear();
			v.clear();
			cin>>temp1>>temp2;
			For(i,temp1-1,temp2)
			{
				v.push_back(make_pair(vec[i].first,vec[i].second));
			}
			ll b=v.size();
			if(b==1)
                {
                    cout<<"0\n";
                    continue;
                }
			hull(v,L,U);
			int i=0,j,m;
                j=L.size()-1;
                m=U.size()-1;
                ll dist=-1;
                while(i<m || j>0)
                {
                    dist=max(dist,fun(U[i],L[j]));
                    if(i==m)
                        j--;
                    else if(j==0)
                        i++;
                    else
                    {
                        if ( (U[i+1].second-U[i].second) * (L[j].first-L[j-1].first) > (L[j].second-L[j-1].second) * (U[i+1].first-U[i].first) )
                        i++;
                    else
                        j--;
                    }
                }
                cout<<dist<<endl;
		}

	}


}


