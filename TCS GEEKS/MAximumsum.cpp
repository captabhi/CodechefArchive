#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[21]={0};
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			arr[temp]++;
		}
		int sum=0;
		for(int i=20;i>=0;i--)
		{
			while(arr[i]>0)
			{
				sum+=i;
				arr[i]--;
				arr[i-1]--;	
			}
			
		}
		cout<<sum<<endl;
		
	}
}
