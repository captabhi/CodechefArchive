#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n,p,q;
		cin>>n;
		if(n==1)
		{
			cout<<1<<" "<<1<<endl;
			continue;	
		}
		else if(n==2)
		{
			cout<<1<<" "<<10<<endl;
		}
		else if(n==3)
		{
			cout<<1<<" "<<10<<endl;
		}
		else
		{
		if(n&1)
		{
			q=(n+1)/2-1;
		}
		else
		q=n/2;
		cout<<1<<" "<<1;
		for(int i=0;i<q;i++)
		{
			cout<<0;
		}
		cout<<endl;
		}
		
		
		
	}
}
