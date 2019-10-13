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
ll arr[100000];

ll heapify(ll idx,ll size)
{
	ll l=2*idx+1,r=2*idx+2;
	ll largest=idx;
	if(arr[l]>arr[largest]&&l<size)
	{
		largest=l;
	}
	if(arr[r]>arr[largest]&&r<size)
	{
		largest=r;
	}
	if(largest!=idx)
	{
		swap(arr[idx],arr[largest]);
		heapify(largest,size);
			
	}
		
}

void make_heap(ll n)
{
	for(int j=floor(n/2)-1;j>=0;j--)
	{
		heapify(j,n);
	}
}

void heap_sort(ll n)
{
	ll size=n-1;
	swap(arr[n-1],arr[0]);
	For(i,0,n-1)
	{
		heapify(0,size);
		size--;
		swap(arr[size],arr[0]);
	}
}
int main()
{
	/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\ASUS\\Desktop\\input.txt","r",stdin);
        freopen("C:\\Users\\ASUS\\Desktop\\output.txt","w",stdout);
    #endif
	*/
	int t=1;
    if(!noTest)  cin>>t;
	while(t--)
	{
	ll n;
	cin>>n;
	cin>>arr[0];
	ll i =0,cnt=1;
	
	while(cnt<n)
	{
		ll temp1,temp2;
		cin>>temp1;
		arr[2*i+1]=temp1;
		cnt++;
		if(cnt<n)
		{
			cin>>temp2;
			arr[2*i+2]=temp2;
			cnt++;	
		}
		i++;
	}
	make_heap(n);
	heap_sort(n);
	For(i,0,n)
	{
		cout<<arr[i]<<" ";
		}	
	cout<<endl;
	}


}


