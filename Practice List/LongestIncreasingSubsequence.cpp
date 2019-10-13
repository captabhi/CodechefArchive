#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	int res[n]={1};
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[i]>arr[j]&&res[j]+1>res[i])
			{
				res[i]=res[j]+1;
			}
			
		}
	}
	int max=0;
	for(int i=0;i<n;i++)
	if(res[i]>max)
	max=res[i];
	
	cout<<max<<endl;
}
