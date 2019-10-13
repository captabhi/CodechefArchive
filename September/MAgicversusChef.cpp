#include<iostream>
using namespace std;
void swap(int s[],int pos1,int pos2)
{
	int temp=s[pos1];
	s[pos1]=s[pos2];
	s[pos2]=temp;
	
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,s;
		cin>>n>>x>>s;
		int arr[n]={0};
		arr[x-1]=1;
		while(s--)
		{
			int a,b;
			cin>>a>>b;
			swap(arr,a-1,b-1);
				
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]==1)
			{
				cout<<i+1<<endl;
				break;
			}
		}
		}	
}
