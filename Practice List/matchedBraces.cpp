#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int var=0,varmax=0,varpos=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
		{
			var++;
		}
		if(var>varmax)
		{
			varmax=var;
			varpos=i+1;
		}
		if(arr[i]==2)
		var--;
	}
	int cntlen=0,maxcntlen=0,cntpos=-1,cnt=0;
	for(int i=0;i<n;i++)
	{
		//cout<<cnt<<endl;
		if(arr[i]==1)
		{
			cnt++;
			cntlen++;
			i++;
		}
		
		while(cnt!=0)
		{
		
		//	cout<<cnt<<" ";
			if(arr[i]==1)
			{
				cnt++;
				cntlen++;
			}
			if(arr[i]==2)
			{
				cnt--;
				cntlen++;
			}
			if(cnt!=0)
			{
				i++;
			}
			if(cntlen>maxcntlen)
			{
				maxcntlen=cntlen;
				cntpos=i+2-cntlen;
			}
			
		}
		//cout<<endl;
		cntlen=0;
		cnt=0;
	}
	cout<<varmax<<" "<<varpos<<" "<<maxcntlen<<" "<<cntpos<<endl;
}
