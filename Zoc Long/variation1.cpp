#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,k,i,j,cnt=0;
	cin>>n>>k;
	 long long int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,arr+n);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;i++)
		{
			while(abs(arr[j]-arr[i])<k)
			j++;
			cnt+=(n-j);
			break;
		}
		
	}
	cout<<cnt;
}
