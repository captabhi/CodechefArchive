#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m,x,y;
		
		int var1=0,var2=0,temp1,temp2;
		cin>>n>>m>>x>>y;
		//cout<<n<<" "<<m<<" "<<x<<" "<<" "<<y<<" ";
		if(x==1)
		var1=1;
		else if(n==1)
		var1=1;
		//solo step check
		else if(n<=x)
		{
			var1=0;
		}
		else
		{
			 temp1=n-(((n-1)/x)*x);
			if(temp1==1)
			var1=1;
			else
			var1=0;
		}
		
		if(y==1)
		var2=1; 
		else if(m==1)
		var2=1;
		else if(m<=y)
		{
			var2=0;
		}
		else
		{
			temp2=m-(((m-1)/y)*y);
			if(temp2==1)
			var2=1;
			else
			var2=0;
		}
		if(n==2&&m==2)
		{
			var1=1;
			var2=1;
		}
		if(n>x&&m>y&&temp1==2&&temp2==2)
		{
		cout<<"Chefirnemo\n";
		continue;	
		}
		
		if(n==2&&m>y&&temp2==2)
		{
			cout<<"Chefirnemo\n";
			continue;
		}
		if(m==2&&n>x&&temp1==2)
		{
			cout<<"Chefirnemo\n";
			continue;
		}
		
		
		if(var1==1&&var2==1)
		cout<<"Chefirnemo\n";
		else
		{
			cout<<"Pofik\n";
		}
		
	}
}
