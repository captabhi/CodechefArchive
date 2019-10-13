#include<iostream>
#include<algorithm>
using namespace std;
long long int findmax(long long int arr[],int beg,int end)
{
	long long int max=0,maxi;
	for(int i=beg;i<end;i++)
	{
		if(arr[i]>max)
		{	
			maxi=i;
			max=arr[maxi];
			//cout<<"Max="<<maxi<<endl;
		
		}
		
		
	}
	return maxi;
}
 
long long int cntopr( long long int arr[],int beg,int end,long long int * ptr,long long int arrH[])
{
//cout<<"Range "<<beg<<" "<<end<<endl;
	if(beg>=end)
	{
	//	cout<<"Returning array "<<beg<<" "<<end<<endl;
		return 0;
		
	}
	else
	{
		
		 int max=findmax(arr,beg,end);
		if(arr[max]==arrH[max])
		{
			    //ChooseValid operation
			   // cout<<"Extra Increment\n"<<arr[max]<<" "<<arrH[max]<<endl;
			    
			cntopr(arr,beg,max,ptr,arrH);
			cntopr(arr,max+1,end,ptr,arrH);
		}
		else
		{
			(*ptr)++;
			
			int offset=arrH[max]-arr[max];
			for(int i=beg;i<end;i++)
			{
				arrH[i]-=(offset);
			//	cout<<arrH[i]<<" ";
			}
		//	cout<<endl;
			cntopr(arr,beg,max,ptr,arrH);
			cntopr(arr,max+1,end,ptr,arrH);	
		}
			
	}
	
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long long int n,i;
		cin>>n;
		long long int initialH[n],targetH[n],temptargetH[n],bitarr[n]={1},flag=0;
		long long int cnt=0;
		for(i=0;i<n;i++)
		{
			cin>>initialH[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>targetH[i];
			
		}
		for(i=0;i<n;i++)
		{
			if(targetH[i]>initialH[i])
			{
				cout<<"-1\n";
				flag=1;
				break;
			}
		}
		if(flag!=1)
		{
		cntopr(targetH,0,n,&cnt,initialH);
		
		cout<<cnt<<endl;	
		}
		
		
	}
		
		
		
} 
