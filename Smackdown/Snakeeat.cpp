#include<bits/stdc++.h>
using namespace std;
int arr[100001]={0};

int bsearch(int num,int beg,int end)
{
	cout<<"Stuck here\n";
	 if(beg>=end)
	{
		return -1;
	}

	int mid=(beg+end)/2;
	if(arr[mid]==num)
	{
		return mid;
	}
	else if(arr[mid]<num){
		bsearch(num,mid+1,end);
	}
	else if(arr[mid]>num)
	{
		bsearch(num,beg,mid-1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		while(q--)
		{
			int k,ans=0,i=0;
			cin>>k;
			int val=bsearch(k,0,n-1);
			cout<<val<<endl;
			if(val!=-1)
			{
				while(arr[val]>=arr[val-i])
				{
					i++;
				}
				ans=ans+(n-1-(val+i));
				int j=val-i;
				cout<<j<<endl;
					
			}
			
			
		}
	}
}
