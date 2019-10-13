#include<iostream>
using namespace std;
int main()
{
	unsigned long long int n,q,L,R,x,y,l,r,temp,i,cnt=0,j,k,maxelm;
	cin>>n>>q>>L>>R;
	unsigned int arr[n+1]={0};
	for(i=0;i<q;i++)
	{
		cin>>temp;
		if(temp==1)
		{
			cin>>x>>y;
			arr[x]=y;
		}
		else if(temp==2)
		{
			cnt=0;
			cin>>l>>r;
			for(j=l;j<=r;j++)
			{
				if(arr[j]>=L&&arr[j]<=R)
				{
				maxelm=arr[j];
				  for(k=j;k<=r;k++)
				{
					if(arr[k]>maxelm)
					maxelm=arr[k];
					if(maxelm>=L&&maxelm<=R)
					cnt++;
					else
					break;
					
				}	
				}
				  	
				}
			 cout<<cnt<<endl;	
			}
			
		}
	
	
	
}
