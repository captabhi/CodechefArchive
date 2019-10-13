#include<iostream>
using namespace std;
int DP[100000];

int fibonacci(int n)
{
	if (DP[n]!=-1)
	{
		return DP[n];
	}
	else if(n==0){
		DP[n]=0;
	return 0;	
	}
	else if(n==1)
	{
		DP[n]=1;
		return 1;	
	}
	else
	{
		DP[n]=fibonacci(n-1)+fibonacci(n-2);
	return DP[n];	
	}
	
	
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<100000;i++)
	{
		DP[i]=-1;
	}
	int ch=fibonacci(n);
	cout<<ch<<endl;
	
}
