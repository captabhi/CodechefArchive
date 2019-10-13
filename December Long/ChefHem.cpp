#include<iostream>
using namespace std;
int main()
{
	
	int t,i,n;
	cin>>t;
	while(t--)
	{
		unsigned int temp1,temp2,k,hamd=0;
		cin>>n;
		k=n-2;
		unsigned int arr[n],arr2[n]={0};
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			arr2[i]=arr[i];
		}
		for(i=0;i<n;)
		{
			 
		    if(n==1)
		    {
		    	break;
			}
			if (n==2&&arr[i]==arr[i+1])
		    {
		    	break;
			}
			if(n==3&&arr[i]==arr[i+1])
			{
				i++;
				continue;
				
			}
			if(i!=n-1&&arr[i]!=arr[i+1])
			{ 
			 temp1=arr[i];
			 arr[i]=arr[i+1];
			 arr[i+1]=temp1;
			 i+=2;
			 //cout<<"b";
			}
			else if(i<n-3&&arr[i]==arr[i+1])
			{
				temp1=arr[i];
				temp2=arr[i+1];
				arr[i]=arr[i+2];
				arr[i+1]=arr[i+3];
				arr[i+2]=temp1;
				arr[i+3]=temp2;
				i+=4;
				//cout<<"c";
			}
			else if(i==n-1)
			{
				temp1=arr[k];
				arr[k]=arr[i];
				arr[i]=temp1;
				i++;
				k++;
				
				//temp1=arr1[i];
			    //while(arr[k]==)
			//	cout<<"a";
			}
			else if(arr[i]==arr[i+1]&&i>=n-3&&i<n)
			{
				temp1=arr[i];
				temp2=arr[i+1];
				arr[i]=arr[i-1];
				arr[i+1]=arr[i-2];
				arr[i-1]=temp1;
				arr[i-2]=temp2;
				i+=2;
			//	cout<<"d";
			}
			
		
		}
		for(i=0;i<n;i++)
		 {
		 	if(arr[i]!=arr2[i])
		 	hamd++;
			 }
			 cout<<hamd<<endl;
        for(i=0;i<n;i++)
		 {
		 	cout<<arr[i]<<" ";
			 }			
			 cout<<endl; 		
	}
}
