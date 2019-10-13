#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		 long long int n,i,c,d,s,k=1;
		  long long int delay=0;
		cin>>n;
		long long int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cin>>c>>d>>s;
		delay+=(arr[0]*(c-1));
		//cout<<delay<<" ";
		for(i=1;i<=n-1;i++)
		{
			if(arr[i]>arr[i-k])
			{
				
				//cout<<arr[i-k]<<" "<<arr[i]<<endl;
				long long int j=1,prevtolltime,nexttolltime,nocleftnexttoll,nocleft,thisdelay;
				prevtolltime=(c-1)*arr[i-k];
				nocleftnexttoll=prevtolltime/arr[i];
				//cout<<nocleftnexttoll<<endl;
				nexttolltime=arr[i]*nocleftnexttoll;
				//cout<<nexttolltime<<endl;
				nocleft=c-nocleftnexttoll-2;
				//cout<<nocleft<<endl;
				thisdelay=(nocleft*arr[i])+((nocleftnexttoll+1)*arr[i]-prevtolltime);	
				delay+=thisdelay;
				//cout<<thisdelay<<" ";
				k=1;
			
			}
			else{
				k++;
			}
			
		}
		cout<<delay<<endl;
	}
}
