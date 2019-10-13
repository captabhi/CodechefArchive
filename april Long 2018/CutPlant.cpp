#include<iostream>
#include<algorithm>
using namespace std;
void reduceHeight(long long int *initialH,long long int *targetH,long long int maxi,long long int maxRL,long long int maxLL,int bitarr[],long long int *ptr,long long int *ptr2)
{
	//out<<"Reducing Height for Max area\n";
		int tempH=targetH[maxi],j,cut=initialH[maxi]-targetH[maxi];
		int flag1=0,flag2=0;
		//out<<"TempH "<<tempH<<" cutting lenght "<<cut<<endl;
		for(j=maxi;j<maxRL;j++)
			{
				/*if(bitarr[j]==0)
				{
				continue;	
				}
				*/
				 
				if(tempH<initialH[j]&&tempH>=targetH[j])
				{
					initialH[j]=tempH;
					//out<<"Cut "<<j<<"\n";
					flag1=1;
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
				 
					if(tempH<initialH[j]&&tempH>=targetH[j])
					{
						initialH[j]=tempH;
						flag2=1;
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
		
		if(flag1==1||flag2==1)
		(*ptr)++;
}
int main()
{
	//freopen("C:\\Users\\ASUS\\Desktop\\input.txt","r",stdin);

    //freopen("C:\\Users\\ASUS\\Desktop\\output.txt","w",stdout);

	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i;
		cin>>n;
		long long int initialH[n],targetH[n],validH,sum=0,j,count=n,maxRL,maxLL,countopr=0,flag=0;
		int bitarr[n];
		for(i=0;i<n;i++)
		bitarr[i]=1;
		for(i=0;i<n;i++)
		{
			cin>>initialH[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>targetH[i];
			if(targetH[i]==initialH[i])
			{
				bitarr[i]=0;
				count--;	
			}
			
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
		if(flag==1)
		continue;
		//sort(targetH,targetH+n);
		i=0;
		unsigned long long int maxsum=0,maxi;
	
		while(count>0)
	{
		//out<<"Remaining plant="<<count<<endl;
		//out<<"Showing BitArray\n";
		/*for(int k=0;k<n;k++)
			{	
				//out<<bitarr[k]<<" ";
			}
			//out<<endl;
			*/
			
		for(i=0;i<n;i++)
		
		{
			//out<<"Running Loop for picking a plant "<<i<<endl;
			if(bitarr[i]==0)
			{
			//out<<"Plant already Cut Skipping!!!!  "<<i<<endl;
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
				// one more condition for checking 
			}
			long long int tempRL=j;
			
			for(j=i-1;j>=0;j--)
			{
				//out<<" j"<<j<<endl;
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
			//out<<"Current Range CameOut to be from "<<i<<" "<<tempLL+1<<" "<<tempRL<<"SUM="<<sum<<endl;
			if(sum>=maxsum)
			{
				maxsum=sum;
				maxi=i;
				maxRL=tempRL;
				maxLL=tempLL;
				//out<<"Max Reduction is for "<<i<<" "<<maxLL+1<<" "<<maxRL<<endl;
				
			}
			
		}
		//out<<"Maximum of everything  "<<maxi<<" "<<maxLL+1<<" "<<maxRL<<"SUM="<<maxsum<<endl;
		reduceHeight(initialH,targetH,maxi,maxRL,maxLL,bitarr,&countopr,&count);
			//out<<"Showing Height After Cutting \n";
		/*	for(int k=0;k<n;k++)
			{	
				//out<<initialH[k]<<" ";
			}
		*/	//out<<endl;	
			maxsum=0;	
	}
	cout<<countopr<<"\n";
		
	
	}
}
