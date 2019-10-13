#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		int arr[n];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			
		}
		//cout<<ans<<endl;
		sort(arr,arr+n);
		int max,min;
		arr[n-1]=arr[n-1]-k;
		max=arr[n-1];
		arr[0]=arr[0]+k;
		min=arr[0];
		if(min>max)
		swap(max,min);
		int diff=arr[n-1]-arr[0];
		for(int i=1;i<n-1;i++)
		{
			int tempmn=arr[i]+k;
			int tempmx=arr[i]-k;
			if(tempmn<=max||tempmx>=min)
			continue;
			
			if(max-tempmx<tempmn-min)
			{
				min=tempmx;
			}
			else
			{
				max=tempmn;
			}
				
		}
		cout<<(diff<(max-min)?diff:(max-min))<<endl;
		
		
	}
}
