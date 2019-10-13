#include<iostream>
using namespace std;
int main()
{
	unsigned int n,k,p,i,cnt=0,temp,c,cntrl=0;
	cin>>n>>k;
	cin>>p;
	 int arr[p];
	for(i=0;i<p;i++)
	{
		cin>>arr[i];
	}
	n--;
	while(n--)
	{
	cnt=0;
	cin>>c;
	bool arr2[110]={0};
	for(i=0;i<c;i++)
	{
		cin>>temp;
		arr2[temp]=	1;
		
	}
	for(i=0;i<p;i++)
	{
		temp=arr[i];
		if(arr2[temp]==1)
		cnt++;
		cout<<cnt<<" ";
	}
	if(cnt>=k)
	cntrl++;
	
		
	}
	cout<<endl<<cntrl<<endl;
	
	
}
