#include<iostream>
#include<algorithm>
#include<time.h>
using namespace std;
int main()
{
	srand(time(0));
	long long int n,m,k,i,product=1;
	cin>>n>>m>>k;
	long long int arr[n],arr2[m],d[n],maxsum=0,sum=0,arr3[n],arr4[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		arr4[i]=arr[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>arr2[i];
	}
	j=0;
	while(j<100)
	{
		
	
	for(i=0;i<n;i++)
	{
		d[i]=rand()%k;
		arr4[i]+=d[i];
		product*=arr[i];

	}
	for(i=0;i<m;i++)
	{
		sum+=(product%arr2[i]);
	}
	if(sum>prevsum)
	{
		for(i=0;i<n;i++)
		arr3[i]=arr[i]+d[i];
	}
	j++;
	}
	
	for(i=0;i<n;i++)
	cout<<arr3[i]<<" ";
	cout<<endl;
	
}
