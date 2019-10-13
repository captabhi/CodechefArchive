#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		int n1=1,m1=1;
		
		if(n==1&&m==1)
		{
			cout<<"Chefirnemo\n";
			continue;
		}
		else if(n==2&&m==2)
		{
			cout<<"Chefirnemo\n";
			continue;			
		}
		
		if(n>x)
		{
			while(n1<=n)
			{
			n1+=x;
			}
			n1-=x;	
		}
		if(m>y)
		{
			while(m1<=m)
			m1+=y;
			m1-=y;	
		}
		
		if(n1==n&&m1==m)
		cout<<"Chefirnemo\n";
		else if(n1==n-1&&m1==m-1)
		cout<<"Chefirnemo\n";
		else
		cout<<"Pofik\n";
		
	}
}
