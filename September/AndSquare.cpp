#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		unsigned long long int arr[n];
		unordered_map <unsigned long long int,unsigned long long int> umap;
		//unordered_map <int,int>:: iterator itr;
		
		for(unsigned long long int i=0;i<=pow(2,15);i++)
		{
			umap[pow(i,2)]=i;
		}
		
		
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			
		}
		while(q--)
		{
			unsigned long long int l,r;
			unsigned long long int cnt=0,andnum;
			cin>>l>>r;
			for(int i=l-1;i<r;i++)
			{
				for(int j=i;j<r;j++)
				{
					if(j==i)
					{
						
						if(umap.find(arr[j])!=umap.end())
						{
							cnt++;
							
						}
						andnum=arr[j];
						//cout<<"AND found "<<andnum<<endl;
						
					}
					else
					{
						andnum=(andnum&arr[j]);
						//cout<<"AND found "<<andnum<<endl;
						if(umap.find(andnum)!=umap.end())
						{
							cnt++;
							
						}
					}
				}
				
				
				
			}
			cout<<cnt<<endl;	
		}
		
	}
}
