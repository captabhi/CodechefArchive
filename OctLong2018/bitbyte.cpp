#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		double q=(double)n/26;
		long long int r=n%26;
		long long int one=0,two=0,three=0;
		if(r==1||r==2)
		{
			one=pow(2,ceil(q)-1);
		}
		else if(r>2&&r<=10)
		{
			two=pow(2,ceil(q)-1);
		}
		else 
		{
			three=pow(2,ceil(q)-1);
		}
		cout<<one<<" "<<two<<" "<<" "<<three<<endl;
	}
}
