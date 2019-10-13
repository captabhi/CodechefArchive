#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j;
		cin>>n;
		unsigned long long int arr[n],arr2[n];
		unsigned int arrcnt[n]={0};
		unsigned long long int sum=0;
		sort(arr2,arr2+n);
		
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			arr2[i]=arr[i];
		}
		
		for(i=0;i<n;i++)
		{
			sum=0;
			for(j=i+1;j<n;j++)
			{
			
				if(j==i+1)
				{
					arrcnt[j]++;
					//cout<<arrcnt[i]<<"j="<<j<<" "<<sum<<endl;
					sum+=arr[j];
					continue;
				}
				else
				{
					
				
					if(arr[i]>=sum)
					{
						arrcnt[j]++;
					//	cout<<arrcnt[i]<<"j="<<j<<" "<<sum<<endl;
						sum+=arr[j];
					}
					else 
					{
						break;
					}
					
				}
			}
			sum=0;
			for(j=i-1;j>=0;j--)
			{
			
				if(j==i-1)
				{
					arrcnt[j]++;
					//cout<<arrcnt[i]<<"j="<<j<<" "<<sum<<endl;
					sum+=arr[j];
					continue;
				}
				else
				{
					
					if(arr[i]>=sum)
					{
						arrcnt[j]++;
					//	cout<<arrcnt[i]<<"j="<<j<<" "<<sum<<endl;
						sum+=arr[j];
					}
					else 
					{
						break;
					}
				}
			}
			
		}
		
		for(i=0;i<n;i++)
		{
			cout<<arrcnt[i]<<" ";
		}
		cout<<endl;
		
	}
}
