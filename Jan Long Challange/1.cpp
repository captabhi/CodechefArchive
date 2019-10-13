#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int arr[100]={-1},n,j=0,k=0,arr2[100]={-1},i,temp;;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			
			if(temp%2==0)
			{
				j++;
				//cout<<j<<"j";
			}
			else
			{
				k++;
				//cout<<k<<"f";
			}
			
		}
		if((k)%2==0)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<2<<endl;
		}
		
	}
}
