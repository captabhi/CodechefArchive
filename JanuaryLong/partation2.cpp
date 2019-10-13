#include<iostream>
using namespace std;
unsigned  int arrr[1000000]={0};
bool isSubsetSum (unsigned  int arr[], unsigned  int n, unsigned long long int sum)
{
if (sum == 0)
  {
  	return true;
  }
	
if (n == 0 && sum != 0)
	return false;
if (arr[n-1] > sum)
{
	//return isSubsetSum (arr, n-1, sum);
	return false;
}

bool val=isSubsetSum (arr, n-1, sum);
 if(val==true)
 {
 	return val;
 }
 bool val1=isSubsetSum (arr, n-1, sum-arr[n-1]);
 if(val1==true)
 {
 	arrr[arr[n-1]]=1;
 	return val1;
 }
}
int main()
{
    int t;
	cin>>t;
	while(t--)
	{
		unsigned  int x,n,j=1;
		unsigned long long int sum=0;	
		
		cin>>x>>n;
		unsigned int arr[n];
		for(int i=1;i<=n;i++)
		{
		arrr[i]=0;	
		}
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
			
		isSubsetSum(arr,n,sum/2);
		for(int i=1;i<=n;i++)
		{ 
		   if(i==x)
		   cout<<2;
		   else if(arrr[i]==1)
		   cout<<1;
		   else 
		   cout<<0;
		}
		cout<<"\n";
		}
		else
		{
			cout<<"impossible\n";
		}
		
		
	 } 
			
return 0;
}

