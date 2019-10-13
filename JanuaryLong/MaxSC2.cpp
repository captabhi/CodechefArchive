#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		 int arr[n][n],maxelm,i,j,maxidx,flag=0,sum=0,maxelmi;
		 int arr2[n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
		}
		maxelm=arr[n-1][0];
		  if(maxelm>arr[n-1][n-1])
		  {
		  	  
			  maxidx=0;
			  }	
			else
			{
				maxidx=n-1;
				maxelm=arr[n-1][n-1];
			  }
			  arr2[n-1]=maxelm;	 
			  //cout<<maxelm<<endl;  
		for(i=n-2;i>=0;i--)
		{
		   
			 maxelmi=arr[i][0];
		  if(maxelmi>arr[i][n-1])
		  {
		  	  
			  maxidx=0;
			  }	
			else
			{
				maxidx=n-1;
				//maxelm=arr[i][n-1];
			  }
			  //arr2[i]=maxelm;
			 
			 
			 if(maxidx==0)
			 {
			 	for(j=maxidx;j<n;j++)
			 	{
			 	if(arr[i][j]<maxelm)
				 {
				 	maxelm=arr2[i]=arr[i][j];
				 //	cout<<maxelm<<endl;
				 	break;
					 }
					 	
				 }
				 if(j==n)
				 {
				 	flag=1;
					 break;	
				 }
			  }
			  else
			  {
			  	for(j=maxidx;j>=0;j--)
			 	{
			 	if(arr[i][j]<maxelm)
				 {
				 	maxelm=arr2[i]=arr[i][j];
				 	//cout<<maxelm<<endl;
				 	break;
					 }	
				 }
			  	
			   }
			   if(j==-1)
				 {
				 	flag=1;
					 break;	
				 } 
		}
		if(flag==1)
		{
			cout<<"-1\n";
			continue;
		}
		for(i=0;i<n;i++)
		{
		sum=sum+arr2[i];	
		}
		
		cout<<sum<<endl;
		
	}
}
