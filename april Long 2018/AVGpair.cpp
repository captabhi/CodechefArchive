#include<iostream>
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		long long  int n,cnt=0,i,j=0,k=0,temp;
		cin>>n;
		long long  int arre[n],arro[n],arr2[3000]={0};
		
		for(i=0;i<n;i++)
		{
			cin>>temp;
			if(temp%2==0)
			{
			arre[j]=temp;
			j++;
				
			}
			
			else 
			{
			arro[k]=temp;
			k++;
				
			}
			
			arr2[temp+1000]=1;
		}
		int evn=j,ood=k;
		for(i=0;i<evn;i++)
		{
			for(j=i+1;j<evn;j++)
			{
				int avg= (arre[i]+arre[j])/2;
					if(arr2[avg+1000]==1)
					cnt++;
			}
		}
		for(i=0;i<ood;i++)
		{
			for(j=i+1;j<ood;j++)
			{
				int avg= (arro[i]+arro[j])/2;
					if(arr2[avg+1000]==1)
					cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	
} 
