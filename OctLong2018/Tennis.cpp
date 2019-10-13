#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int p1,p2,k;
		cin>>p1>>p2>>k;
		long long int temp=p1+p2;
		temp/=k;
		if((temp)%2==0)
		{
			cout<<"CHEF\n";
		}
		else
		cout<<"COOK\n";
	}
}
