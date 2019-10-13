#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n]={0};
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			if(k-temp>=0)
			{
				k-=temp;
				arr[i]=1;
			}
						
		}
		for(int i=0;i<n;i++)
		cout<<arr[i];
		cout<<endl;
		
	}
}
