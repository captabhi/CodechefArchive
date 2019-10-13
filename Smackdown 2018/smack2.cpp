#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
	int cnt=0;
	for(int i=1;i<=(n);i++)
	{
		if(n%i==0)
		cnt++;
	}
	if(cnt==2)
	{
		return 1;
	}
	else return 0;
}
int issemiprime(int n)
{
	int a,b,flag=0;
	for(int i=1;i<n/2;i++)
		{
			if(isprime(i))
			{
				if(n%i==0)
				{
					a=n/i;
					if(isprime(a)&&a!=i)
					{
						//cout<<"Semiprime "<<n<<endl;
						return 1;
					}
				}		
			}
		}
		if(flag==0)
		return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,flag=0;
		cin>>n;
		int a,b;
		//cout<<isprime(5)<<endl;
		for(int i=1;i<n;i++)
		{
			a=n-i;
			if(issemiprime(a)&&issemiprime(i))
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"YES\n";
		}
		else 
		cout<<"NO\n";
	}
}
