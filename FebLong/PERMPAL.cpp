#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int len=s.length();
		int size=len;
		int i,k,j,flag=0,tempvar,seeflag=0;
		int arr[len];
		for(i=0;i<len;i++)
		arr[i]=i;
		if(size%2==0)
		{
			for(i=0;i<size/2;i++)
			{
				char var=s[i];
				
				for(j=i+1;j<len;j++)
				{
				    if(var==s[j])
					{
						//cout<<i<<" "<<j<<"\n";
						int temp=arr[len-1];
						char temp1=s[len-1];
						arr[len-1]=arr[j];
						s[len-1]=s[j];
						arr[j]=temp;
						s[j]=temp1;
						len--;
						break;
					}	
				}
				if(j>size-i-1)
				{
					cout<<"-1\n";
					flag=1;
					break;
				}
				
			}
		}
		else
		{
			int tempflag=0;
			for(i=0;i<size/2;i++)
			{
				char var=s[i];
				
				for(j=i+1;j<len;j++)
				{
				    if(var==s[j])
					{
						//cout<<i<<" "<<j<<"\n";
						int temp=arr[len-1];
						char temp1=s[len-1];
						arr[len-1]=arr[j];
						s[len-1]=s[j];
						arr[j]=temp;
						s[j]=temp1;
						len--;
						break;
					}	
				}
				if(j>size-i-1&&tempflag==0)
				{
				//	cout<<i<<" "<<size/2<<endl;
					int temp=arr[(size)/2];
					char temp1=s[(size)/2];
					arr[(size)/2]=arr[i];
						s[(size)/2]=s[i];
						arr[i]=temp;
						s[i]=temp1;
						tempflag=1;
						i--;
						continue;
						
				}
				else if(j>size-i-1&&tempflag==1)
				{
					cout<<"-1\n";
					flag=1;
					break;
				}
				
			}
		}
		if(flag==0)
		{
			for(i=0;i<size;i++)
			{
				cout<<arr[i]+1<<" ";
			}
			cout<<endl;
		}
		
		
				
	}
	
}
