#include<iostream>
using namespace std;
int main()
{
	int n,j,k,L,R,maxelm,cnt,l,r;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	cin>>L>>R;
	cnt=0;
			cin>>l>>r;
			for(j=l;j<=r;j++)
			{
				if(arr[j]>=L&&arr[j]<=R)
				{
				 maxelm=arr[j];
				  //cout<<maxelm<<endl;
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
