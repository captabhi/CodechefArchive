#include<iostream>
#include<algorithm>
using namespace std;
int bsearch(unsigned long long arr[],int n,int value,int c)
{
	unsigned long long int last=arr[0];
	int count=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]-last>=value)
		{
			count++;
			last=arr[i];
		}
	}
	//cout<<"Count is"<<count<<endl;
	if(count>=c)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
int main()	
{
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,c;
		cin>>n>>c;
		unsigned long long  int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n);
		int beg=1,last=1000000000,midvalue,midrvalue,pos=0;
		if(c==2)
		{
			cout<<arr[n-1]-arr[0]<<endl;
		}
		else
		{
			while(beg<=last)
			{
			midvalue=(beg+last)/2;
			//cout<<midvalue<<endl;
			 midrvalue=bsearch(arr,n,midvalue,c);
			 if(midrvalue==1)
			 {
			 	beg=midvalue+1;
			 	pos=midvalue;
			 }
			 else
			 {
			 	last=midvalue-1;
			 }
			
			}
			cout<<pos<<endl;
			
		}
		
		
		
			
		
		
	}
}
