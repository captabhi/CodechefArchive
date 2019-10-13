
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2,n3,temp,count=0;
	cin>>n1>>n2>>n3;
	 int arr[50006];
	 memset(arr,0,50006*sizeof(arr[0]));
	for(int i=0;i<n1+n2+n3;i++)
	{
		cin>>temp;
		arr[temp]++;
		
		
	}
	for(int i=0;i<50005;i++)
	{
		if(arr[i]>=2)
		count++;
	}
	cout<<count<<endl;
	for(int i=0;i<50005;i++)
	{
		if(arr[i]>=2)
		cout<<i<<endl;
	}
}
