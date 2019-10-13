#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,i;
	 long long int maxrev,sum;
	cin>>n;
	  long long int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	sort(arr,arr+n);
	
	maxrev=arr[0]*n;
	for(i=1;i<n;i++)
	{
	 sum=arr[i]*(n-i);
	 if(sum>maxrev)
	 maxrev=sum;
	}
	cout<<maxrev<<endl;
	
}
