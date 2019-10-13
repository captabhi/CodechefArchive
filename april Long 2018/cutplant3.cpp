#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<time.h>
#define num 11
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
void reduceHeight(long long int *initialH,long long int *targetH,long long int maxi,long long int maxRL,long long int maxLL,int bitarr[],long long int *ptr,long long int *ptr2)
{
	//out<<"Reducing Height for Max area\n";
		int tempH=targetH[maxi],j,cut=initialH[maxi]-targetH[maxi];
		//out<<"TempH "<<tempH<<" cutting lenght "<<cut<<endl;
		for(j=maxi;j<maxRL;j++)
			{
				if(bitarr[j]==0)
				continue;
				if(tempH<initialH[j]&&tempH>=targetH[j])
				{
					initialH[j]=tempH;
					//out<<"Cut "<<j<<"\n";
				}
				else if(tempH<targetH[j]||tempH>initialH[j])
				{
					break;
				}
				if(initialH[j]==targetH[j])
				{
					bitarr[j]=0;
					(*ptr2)--;
				 } 
			}
			//out<<"Running from "<<maxLL+1<<" "<<maxi-1<<endl;
			for(j=maxi-1;j>maxLL;j--)
			{
					if(bitarr[j]==0)
					continue;
					if(tempH<initialH[j]&&tempH>=targetH[j])
					{
						initialH[j]=tempH;
						//out<<"Cut "<<j<<"\n";
					
					}
					else if(tempH<targetH[j]||tempH>initialH[j])
					{
						break;
					}
					if(initialH[j]==targetH[j])
					{
						bitarr[j]=0;
						(*ptr2)--;
				 	}	 		
			}
		
		
		(*ptr)++;
}
int main()
{
	int t;
	srand(time(0));
	cin>>t;
	while(t--)
	{
		long long int n,i;
		cin>>n;
		long long int initialH[n],initialH1[n],targetH[n],validH,sum=0,j,count=n,maxRL,maxLL,countopr=0,flag=0;
		int bitarr[n];
		for(i=0;i<n;i++)
		bitarr[i]=1;
		long long int randomno1 =rand()%num;
		for(i=0;i<n;i++)
		{
			initialH[i]=randomno1;
			initialH1[i]=randomno1;
		}
		cout<<endl;
		for(i=0;i<n;i++)
		{
			long long int randomno=rand()%randomno1;
			while(randomno==0)
			randomno=rand()%randomno1;
			
			targetH[i]=randomno;
			if(targetH[i]==initialH[i])
			{
				bitarr[i]=0;
				count--;	
			}
			
		}
		for(i=0;i<n;i++)
		{
			cout<<initialH[i]<<" ";
		}
		cout<<endl;
		for(i=0;i<n;i++)
		{
			cout<<targetH[i]<<" ";
		}
		cout<<endl;
		for(i=0;i<n;i++)
		{
			if(targetH[i]>initialH[i])
			{
				cout<<"-1\n";
				flag=1;
				break;
			}
		}
		if(flag==1)
		continue;
		
		long long int cnt=0;
		cntopr(targetH,0,n,&cnt,initialH1);
		
		for(i=0;i<n;i++)
		{
			cout<<initialH[i]<<" ";
		}
		cout<<endl;
		for(i=0;i<n;i++)
		{
			cout<<targetH[i]<<" ";
		}
		cout<<endl;
		
		i=0;
		unsigned long long int maxsum=0,maxi;
	
		while(count>0)
	{
			
		for(i=0;i<n;i++)
		
		{
			
			if(bitarr[i]==0)
			{
			
			continue;	
			}
			
			
			sum=initialH[i]-targetH[i];
			long long int tempH=targetH[i];
			for(j=i+1;j<n;j++)
			{
				if(tempH<initialH[j]&&tempH>=targetH[j])
				{
					sum+=(initialH[j]-tempH);
					
				}
				else if(tempH<targetH[j]||tempH>initialH[j])
				{
					break;
				}
				
			}
			long long int tempRL=j;
			
			for(j=i-1;j>=0;j--)
			{
				
				if(tempH<initialH[j]&&tempH>=targetH[j])
				{
					sum+=(initialH[j]-tempH);
					
				}
				else if(tempH<targetH[j]||tempH>initialH[j])
				{
					break;
				}
			}
			long long int tempLL=j;
			
			if(sum>=maxsum)
			{
				maxsum=sum;
				maxi=i;
				maxRL=tempRL;
				maxLL=tempLL;

				
			}
			
		}
		
		reduceHeight(initialH,targetH,maxi,maxRL,maxLL,bitarr,&countopr,&count);
				
			maxsum=0;	
	}
	cout<<countopr<<"  "<<cnt<<"\n";
	
		
	
	}
}
