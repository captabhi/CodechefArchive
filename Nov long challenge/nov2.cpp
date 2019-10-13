#include<iostream>
using namespace std;
int main()
{
	int t,n,r,flag=1;
	
	cin>>t;
	while(t--)
	{
		cin>>n>>r;
		flag=1;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		int maxl=0;
		int maxr=1000000001;
		for(int i=0;i<n;i++)
		{
	      	if(arr[i]>r)
	      	{
	      		if(arr[i]<maxr)
	      		{
	      			maxr=arr[i];
	      			flag=1;
				  }
				  else
				  {
				  	flag=0;
				  	break;
				  }
	      		
			  }
			else if(arr[i]<r)
	      	{
	      		if(arr[i]>maxl)
	      		{
	      			maxl=arr[i];
	      			flag=1;
				  }
				  else
				  {
				  	flag=0;
				  	break;
				  }
			  }
			  
	      	
		}
		if(flag==1)
			  cout<<"YES\n";
			  else
			  cout<<"NO\n";
		
	}
}
