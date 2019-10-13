#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,i,j,sum=0,arr[1001]={0},temp,cnt=0;
	cin>>n;
	for(i=0;i<n;i++)
	{ 
	  cin>>temp;
	  arr[temp]++;	
	}
	for(i=1;i<=1000;i++)
	{
		if(arr[i]==0)
		continue;
		for(j=i+1;j<=1000;j++)
		{
		 	if(arr[j]==0)
		     continue;
		     else
		     {
		     	cnt=((arr[i]+arr[j])*(arr[i]+arr[j]-1)/2)-(arr[i]*(arr[i]-1)/2)-(arr[j]*(arr[j]-1)/2);
		     	sum+=cnt*(j-i);
			 }
		}
	}
	cout<<sum;
	
}
