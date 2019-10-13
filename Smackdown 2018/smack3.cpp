#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int i=0,j=0,tot=arr[0];
		
		while(i<n)
		{
			if(tot>(n-1))
			break;
			for(int k=i;k<tot;k++)
			{
				tot+=arr[k];
			}
			i=tot;
			j++;
		}
		cout<<j+1<<endl;
	}
}
