#include<iostream>
#include<cstdio>
unsigned long long int arr[1000001];
using namespace std;
unsigned long long int absa(long long int a)
{
	if(a<0)
	return a*(-1);
	else
	return a;
}
unsigned long long int sum( unsigned long long int num)
{
	unsigned long long int sume=0,sumo=0,temp;
	long long int a;
	while(num)
	{
		temp=num%10;
		if(temp%2==0)
		sume+=temp;
		else
		sumo+=temp;
		num/=10;
	}
	a=sume-sumo;
	return absa(a);

}
int main()
{
	 int t;
	 int i,j;
	scanf("%d",&t);
	while(t--)
	{

	    int n;
		unsigned long long int sumt=0,rowsum=0,val;
	        scanf("%d",&n);
	 		unsigned int arr[n+1];
		  for(j=1;j<=n;j++)
			{
				val=sum(1+j);
				arr[j]=val;
				rowsum+=val;
			}
			sumt+=rowsum;
			for(i=2;i<=n;i++)
			{
				rowsum-=arr[i-1];
				rowsum+=sum(i+n);
				sumt+=rowsum;
			}
					cout<<sumt<<endl;
	}
}
