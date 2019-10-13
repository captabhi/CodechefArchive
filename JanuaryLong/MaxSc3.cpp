#include<iostream>
#include<algorithm>
using namespace std;

void sortq(unsigned int * ptr,int n)
{
	sort(ptr,ptr+n);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,flag=0;
		unsigned long long int maxelm,sum=0;
		cin>>n;
		unsigned int arr[n][n],arr2[n];
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
		}
		for(j=0;j<n;j++)
			{
				sortq(&arr[j][0],n);
			
			}
			maxelm=arr[n-1][n-1];
			arr2[n-1]=maxelm;
		for(i=n-2;i>=0;i--)
		{
			j=n-1;
			flag=0;
			while(arr[i][j]>maxelm||arr[i][j]==maxelm)
			{
			   j--;
			}
			if(j<0)
			{
				cout<<"-1\n";
				flag=1;
				break;
			}
			else
			{
				maxelm=arr2[i]=arr[i][j];
				
			}		
			
		}
		if(flag==0)
		{
		for(i=0;i<n;i++)
		sum+=arr2[i];
		cout<<sum<<endl;	
		}
		
	
	}
}
