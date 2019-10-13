#include<iostream>
using namespace std;
int main()
{
	int t,n,flag,flag0;;
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>n;
		int arr[10]={0};
		int arr2[10]={0};
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
			
		}
		for(int i=1,j=n;i<=n,j>=1,arr[i]<=6,arr[j]<=6;i++,j--)
		{
			if(arr[i]==arr[j])
			flag=1;
			else
			{
				flag=0;
				break;
			}
		}
		
		if(flag==1)
		cout<<"yes\n";
		else
		cout<<"no\n";
		
	}
	
}
