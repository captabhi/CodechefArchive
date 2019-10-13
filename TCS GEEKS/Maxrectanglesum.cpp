#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			cin>>arr[i][j];
		}
	
	
	int maxsum=0,top=0,right=0,left=0,bottom=0,cursum=0;
	for(int i=0;i<m;i++)
	{
		int col[n]={0};
		for(int j=i;j<m;j++)
		{
			int temp=0;
			
			for(int k=0;k<n;k++)
			{
				//cout<<arr[k][j]<<"\n";
				col[k]+=arr[k][j];
				temp+=col[k];
			}
		//	cout<<temp<<endl;
			int max_so_far=0;
			//int temptop=0,tempbottom=0;
			
			for(int k=0;k<n;k++)
			{
				max_so_far+=col[k];
				if(maxsum<max_so_far)
				{
					maxsum=max_so_far;
					bottom=k;
					left=i;
					right=j;
				}
				if(max_so_far<0)
				{
					max_so_far=0;
					top=k;
				}
				
			}
	
		}
	}
	cout<<maxsum<<endl;
	}
	
	
}
