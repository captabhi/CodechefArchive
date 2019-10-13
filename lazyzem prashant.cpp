#include<iostream>

using namespace std;
void sumCalculator(unsigned long long &sum,unsigned long int n,long int m,long int b);

int main()
{
	unsigned long long t,n,b,m,sum;

	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>b>>m;
		sum=0;

		while(n>0)
		{

			if(n%2)
			{
				sum+=(n+1)/2*m;
				n=n-(n+1)/2;
			}
			else
			{
				sum+=n/2*m;
				n=n-n/2;
			}

			m=m*2;
			sum+=b;

		}
		cout<<sum-b<<endl;

	}

}
