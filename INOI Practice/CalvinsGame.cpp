#include<iostream>
using namespace std;
int main()
{
	
	int n,k,i,t,scr=0,maxthg=0,maxth=0,var,maxvar;
	cin>>n>>k;
	maxvar=k;
	int arr[n+1];
	int arr2[n+1];
	for(i=1;i<=n;i++)
	{
		
		cin>>arr[i];
	}
	for(i=k;i<=n;)
	{
		if(arr[i+1]>0&&i+1<=n)
		{
			maxth+=arr[i+1];
			i++;
			var=i;

		}
		else if(arr[i+2]>0&&i+2<=n)
		{
			maxth+=arr[i+2];
			i+=2;
			var=i;
			
		}
		else 
		{
			if(i==n||i+1==n)
			break;
			else if(arr[i+1]<arr[i+2])
			{
				maxth+=arr[i+2];
				i+=2;
				var=i;
				
			}
			else
			{
				maxth+=arr[i+1];
				i+=1;
				var=i;		
			}
			
		}
		if(maxth>maxthg)
		{
		maxthg=maxth;
		maxvar=var;	
		}
		
	}
	for(i=maxvar;i>=1;)
	{
		if(arr[i-1]>0&&i-1>=1)
		{
			maxthg+=arr[i-1];
			i--;
		}
		else if(arr[i-2]>0&&i-2>=1)
		{
			maxthg+=arr[i-2];
			i-=2;
		}
		else 
		{
			if(i==1)
			break;
			if(i-1==1)
			{
				maxthg+=arr[i-1];
				i--;
			}
			else if(arr[i-1]<arr[i-2])
			{
				maxthg+=arr[i-2];
				i-=2;
			}
			else
			{
				maxthg+=arr[i-1];
				i-=1;
			}
		}
		
	}
	cout<<maxthg;

	
}
