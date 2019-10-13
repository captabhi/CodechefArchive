#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long int n,i,j=0,arr2[2*1000+1]={0},cnt=0;	
		cin>>n;
		long long int arr[n];
		for(i=0;i<n;i++)
		{
			
			cin>>arr[i];
			arr2[arr[i]+1000]++;
			
		}
	/*	for(i=0;i<2000;i++)
		{
			
			if(arr2[i]!=0)
			cout<<arr2[i]<<" ";
			
		}
	*/	
		for(i=0;i<=2000;i++)
		{
			
			for(j=i;j<=2000;j++)
			{
				if((arr2[i]!=0&&arr2[j]!=0))
				{
					if(i==j)
					{
						if(arr2[i]<2)
						continue;
						else if(arr2[i]>1)
						{
							cnt+=(arr2[i]*(arr2[i]-1)/2);
							continue;
						}
						
					}
					if((i-1000)%2==0&&(j-1000)%2==0)
					{
						long long int avg=((i-1000)+(j-1000))/2;
						//cout<<i-1000<<"e"<<j-1000<<endl;
						//cout<<arr2[i]<<" "<<arr2[j]<<endl;
						if(arr2[avg+1000]!=0)
						{
						cnt+=(arr2[i]*arr2[j]);
						//cout<<"found\n";	
						}
						
						
					}else if((i-1000)%2!=0&&(j-1000)%2!=0)
					{
						long long int avg=((i-1000)+(j-1000))/2;
						//cout<<i-1000<<"o"<<j-1000<<endl;
						//cout<<arr2[i]<<" "<<arr2[j]<<endl;
						if(arr2[avg+1000]!=0)
						{
						cnt+=(arr2[i]*arr2[j]);
						//cout<<"found\n";	
						}
						
					}
				}
				
			}
		}
		
		cout<<cnt<<endl;
	}
}
