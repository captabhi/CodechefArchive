#include<iostream>
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
	unsigned int t;
	unsigned long long int i,j,val;
	cin>>t;
	while(t--)
	{

		 int n;
		unsigned long long int sumt=0,temp,rowsum=0;
	    unsigned int arr[n+1],vararr;
	 		cin>>n;
		    temp=sum(1+j);
			rowsum=0;
			for(j=1;j<=n;j++)
			{
				val=sum(1+j);
				arr[j]=val;
				rowsum+=val;
				cout<<j<<" ";
			}
			sumt+=(rowsum*2-temp);
			//arr1=arr[1]+arr[2];
		for(i=2;i<=n;i++)
		{
			val=sum(i+n);
			cout<<val<<endl;
			//cout<<i<<endl;

	    }
		/*for(i=1;i<=n;i++)
		{
			j=i;
			temp=sum(i+j);
			rowsum=0;
			for(j=i;j<=n;j++)
			{
				val=sum(i+j);
				rowsum+=val;
				cout<<val<<" ";
			}
			sumt+=(rowsum*2-temp);
			cout<<endl;
		}*/
		cout<<sumt<<endl;
	}
}
