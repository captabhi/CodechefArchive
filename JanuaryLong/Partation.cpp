#include<iostream>
using namespace std;
int main()
{
    int t,k;
	cin>>t;
	while(t--)
	{
		unsigned  int x,n,i,j=1;
		unsigned  long long int sum=0,sum2=0,sum1=0;	
		
		cin>>x>>n;
		unsigned  int arr[n];
		 bool taken[n+2]={0};
		if(n==2||n==3)
		{
		cout<<"impossible\n";
		continue;	
		}	
		for(int i=1;i<=n;i++)
		{
		 
		 if(i==x)
		 continue;
		 
		 else
		 {
		 	arr[j]=i;
		 	sum+=arr[j];
		 	j++;
			 }
			 	
		}
		if(sum%2==0)
		{ 
		 sum/=2;
		 sum1=sum;
		 for(i=n;i>=1;i--)
		 {
		 	if(i==x)
		 	continue;
		 	if(sum==x)
			 {
	            sum=sum1;
	            for(i=1;i<=n;i++)
	            taken[i]=0;
				for(i=n-1;i>=1;i--)
				{
					if(i==x)
					continue;
					if(sum>=i)
		 			{
		 			sum-=i;
			 		taken[i]=1;	
			 		}
					
				}
				break;	 	
			}
		 	if(sum>=i)
		 	{
		 	sum-=i;
			 taken[i]=1;	
			 }
		 	}
		for(int i=1;i<=n;i++)
		{ 
		   if(i==x)
		   cout<<2;
		   else if(taken[i]==1)
		   cout<<1;
		   else 
		   cout<<0;
		   
		  /* if(i==x)
		   continue;
		   else if(taken[i]==1)
		   sum2+=i;
		   */
		}
		/*if(sum1!=sum2)
		{
		cout<<sum1<<"  "<<sum2<<" "<<n<<" "<<x;	
		cout<<"\n";
		}
		*/
		
		cout<<"\n";	 
			 	
		}
		else
		{
			cout<<"impossible\n";
		}
		
	
	
}
}
