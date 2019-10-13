#include<iostream>
using namespace std;
int main()
{
	unsigned int n,q,y,x,k,j,temp,cnt=0,i,t;
	cin>>n>>q;
	unsigned int arr[n+1],arrxor[n+1];
	unsigned int *arrcnt=new unsigned int [1000001];
	for(i=0;i<1000001;i++)
	arrcnt[i]=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	arrxor[1]=arr[1];
	arrcnt[arrxor[1]]++;
	for(i=2;i<=n;i++)
	{
		arrxor[i]=arr[i]^arrxor[i-1];
		arrcnt[arrxor[i]]++;	
		
		
	}
	for(i=0;i<q;i++)
	{
	 cin>>t;
	if(t==1)
	{
		cin>>j>>x;
		temp=arr[j];
		arr[j]=x;
		for(y=j;y<=n;y++)
		{
			arrcnt[arrxor[y]]--;
			arrxor[y]=arrxor[y]^temp;
			arrxor[y]=arrxor[y]^x;
			arrcnt[arrxor[y]]--;
			
									
		}	
	}
	else
	{   
		cin>>j>>k;
		cnt=0;
		if(j==n)
		{
			cout<<arrcnt[k]<<"\n";
		}
		else
		{
		 for(y=1;y<=j;y++)
		{
			if(k==arrxor[y])
			cnt++;		
		}
		cout<<cnt<<endl;	
		}
		
	}
		
	}
}
