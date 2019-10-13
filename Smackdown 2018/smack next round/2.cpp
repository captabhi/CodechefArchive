#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,k;
		cin>>n;
		long long int arr[n],first,last;
		for( i=0;i<n;i++)
		cin>>arr[i];
		first=arr[0];
		for(i=0;i<n-1;)
		{
			if(arr[i+1]<arr[i])
			{
			last=arr[i];	
			break;	
			}
			else
			{
				i++;
			}
		 }
		if(i>=n-1) 
		{
			cout<<"YES\n";
			continue;
		 }
		 for(j=i+1;j<n-1;)
		{
			if(arr[j+1]<arr[j])
			break;
			else
			{
				j++;
			}
		 }
		 if(j<n-1) 
		{
			cout<<"NO\n";
			continue;
		 }
		 else
		 {
		 	if(first>=arr[n-1])
		 	{
		 		cout<<"YES\n";
			 }
			 else
			 {
			 	cout<<"NO\n";
			 }
		 }
		  
	}
}
