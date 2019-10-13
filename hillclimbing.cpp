#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
	long long int n,q,i;
	cin>>n>>q;
	long long int hill[n];
	for(i=0;i<n;i++)
	{
		cin>>hill[i];
		
	}
	long long int bsize=sqrt(n);
	long long int bucket[bsize],bidx=-1;
	for(i=0;i<n;i++)
	{
		if(i%bsize==0)
		bidx++;
		if(hill[i+1]-hill[i]>0&&hill[i+1]-hill[i]<=100)
		{
			bucket[idx]=1;
		}
	}
	while(q--)
	{
		int ch;
		cin>>ch;
		if(ch==1)
		{
			long long int l,k;
			cin>>l>>k;
		}
		else
		{
			long long int l,r,x;
			cin>>l>>r>>x;
		}
		
	}
}
