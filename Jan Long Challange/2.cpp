#include<iostream>
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,m,i,j;
		cin>>m>>n;
		int arr[m+5][n+5];
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				int temp=arr[i][j];
				if(temp==0||temp==-1)
				{
					continue;
				}
				else
				{
					int tempi=i,tempj=j;
					
					while(tempj<n-1)
					{
						if(arr[i][tempj+1]==-1||arr[tempi][tempj]==0)
						break;
						if(arr[i][tempj+1]<arr[i][tempj]-1)
						{
							arr[i][tempj+1]=arr[i][tempj]-1;
						}
						tempj++;
					}
					 
					tempi=i;tempj=j;
					while(tempj>0)
					{
						if(arr[i][tempj-1]==-1||arr[tempi][tempj]==0)
						break;
						if(arr[i][tempj-1]<arr[i][tempj]-1)
						{
							arr[i][tempj-1]=arr[i][tempj]-1;
						}
						tempj--;
					}
					tempi=i;tempj=j;
					
					while(tempi>0)
					{
						if(arr[tempi-1][j]==-1||arr[tempi][tempj]==0)
						break;
						if(arr[tempi-1][j]<arr[tempi][j]-1)
						{
							arr[tempi-1][j]=arr[tempi][j]-1;
						}
						tempi--;
					}
					tempi=i;tempj=j;
					while(tempi<m-1)
					{
						if(arr[tempi+1][j]==-1||arr[tempi][tempj]==0)
						break;
						if(arr[tempi+1][j]<arr[tempi][j]-1)
						{
							arr[tempi+1][j]=arr[tempi][j]-1;
						}
						tempi++;
					}
				}
				
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				int temp=arr[i][j];
				if(temp==0||temp==-1)
				{
					continue;
				}
				else
				{
					int tempi=i,tempj=j;
					
					while(tempj<n-1)
					{
						if(arr[i][tempj+1]==-1||arr[tempi][tempj]==0)
						break;
						if(arr[i][tempj+1]<arr[i][tempj]-1)
						{
							arr[i][tempj+1]=arr[i][tempj]-1;
						}
						tempj++;
					}
					 
					tempi=i;tempj=j;
					while(tempj>0)
					{
						if(arr[i][tempj-1]==-1||arr[tempi][tempj]==0)
						break;
						if(arr[i][tempj-1]<arr[i][tempj]-1)
						{
							arr[i][tempj-1]=arr[i][tempj]-1;
						}
						tempj--;
					}
					tempi=i;tempj=j;
					
					while(tempi>0)
					{
						if(arr[tempi-1][j]==-1||arr[tempi][tempj]==0)
						break;
						if(arr[tempi-1][j]<arr[tempi][j]-1)
						{
							arr[tempi-1][j]=arr[tempi][j]-1;
						}
						tempi--;
					}
					tempi=i;tempj=j;
					while(tempi<m-1)
					{
						if(arr[tempi+1][j]==-1||arr[tempi][tempj]==0)
						break;
						if(arr[tempi+1][j]<arr[tempi][j]-1)
						{
							arr[tempi+1][j]=arr[tempi][j]-1;
						}
						tempi++;
					}
				}
				
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				int temp=arr[i][j];
				if(temp==0||temp==-1)
				{
					continue;
				}
				else
				{
					int tempi=i,tempj=j;
					
					while(tempj<n-1)
					{
						if(arr[i][tempj+1]==-1||arr[tempi][tempj]==0)
						break;
						if(arr[i][tempj+1]<arr[i][tempj]-1)
						{
							arr[i][tempj+1]=arr[i][tempj]-1;
						}
						tempj++;
					}
					 
					tempi=i;tempj=j;
					while(tempj>0)
					{
						if(arr[i][tempj-1]==-1||arr[tempi][tempj]==0)
						break;
						if(arr[i][tempj-1]<arr[i][tempj]-1)
						{
							arr[i][tempj-1]=arr[i][tempj]-1;
						}
						tempj--;
					}
					tempi=i;tempj=j;
					
					while(tempi>0)
					{
						if(arr[tempi-1][j]==-1||arr[tempi][tempj]==0)
						break;
						if(arr[tempi-1][j]<arr[tempi][j]-1)
						{
							arr[tempi-1][j]=arr[tempi][j]-1;
						}
						tempi--;
					}
					tempi=i;tempj=j;
					while(tempi<m-1)
					{
						if(arr[tempi+1][j]==-1||arr[tempi][tempj]==0)
						break;
						if(arr[tempi+1][j]<arr[tempi][j]-1)
						{
							arr[tempi+1][j]=arr[tempi][j]-1;
						}
						tempi++;
					}
				}
				
			}
		}
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(arr[i][j]==-1)
				cout<<"B";
				else if(arr[i][j]>=1)
				{
					cout<<"Y";
				}
				else
				{
					if(arr[i+1][j]>=1&&i+1<m)
					cout<<"Y";
					else if(arr[i-1][j]>=1&&i>0)
					cout<<"Y";
					else if(arr[i][j+1]>=1&&j+1<n)
					cout<<"Y";
					else if(arr[i][j-1]>=1&&j>0)
					cout<<"Y";
					else
					cout<<"N";
				}
			}
			cout<<endl;
		}
	}
}
