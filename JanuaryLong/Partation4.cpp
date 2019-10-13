#include<iostream>
using namespace std;
void findPartation (unsigned int arr[], unsigned int n,unsigned int sum,unsigned int x)
{
	int i, j;
    bool array[n+1]={0};
	bool part[sum/2+1][n+1];
	for (i = 0; i <= n; i++)
	part[0][i] = true;
	for (i = 1; i <= sum/2; i++)
	part[i][0] = false;	  
	for (i = 1; i <= sum/2; i++) 
	{
	for (j = 1; j <= n; j++) 
	{
		part[i][j] = part[i][j-1];
		if (i >= arr[j-1])
		part[i][j] = part[i][j] || part[i - arr[j-1]][j-1];
	}	 
	}  	
	j=n;
	for(i=sum/2;i>0;)
	{	
		for(;j>0;j--)
		{
			//cout<<"j="<<j+1;
			if(part[i][j]==0)
			{
				//cout<<arr[j]<<" ";
				array[arr[j]]=1;
				i-=arr[j];
				break;		
			}
						
		}
		//cout<<"i="<<i;
	}
	for(int i=1;i<=n;i++)
		{ 
		   if(i==x)
		   cout<<2;
		   else if(array[i]==1)
		   cout<<1;
		   else 
		   cout<<0;
		}
	cout<<"\n";
	
}	 
int main()
{
int t;
	cin>>t;
	while(t--)
	{
		unsigned  int x,n,j=1;
		unsigned  int sum=0;	
		
		cin>>x>>n;
		unsigned int arr[n];
		if(n==2||n==3)
		{
		cout<<"impossible\n";
		continue;	
		}	
		for(int i=1;i<=n;i++)
		{
		 
		 if(i==x)
		 continue;
		 else
		 {
		 	arr[j]=i;
		 	sum+=arr[j];
		 	j++;
			 }
			 	
		}
		if(sum%2==0)
		{
			findPartation(arr,j,sum,x);
		}
		else
		{
			cout<<"impossible\n";
		}
		
		}
}

