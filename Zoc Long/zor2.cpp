#include<iostream>
using namespace std;
int globdpth=0,globpos=0,maxlen,maxsymbol=0;
int braces(int arr[],int pos,int prevdpth,int symbol)
{
	int i=pos;
	//int tempdpth=1;
	if(1+prevdpth>globdpth)
	{
	globdpth=1+prevdpth;
	globpos=i;	
	}
	
	
	while(arr[i]!=2)
	{
	 i++;
	 if(arr[i]==1)
	 {
	 	
		 i=braces(arr,i,1+prevdpth,1+symbol);
		 
		 }
	 	 	
	}
	if(symbol>maxsymbol)
	maxsymbol=symbol;
	return i;
	
}
int main()
{
	int j,k=1,prevdpth=0;
	cin>>maxlen;
	int arr[maxlen+1];
	
	for(j=1;j<maxlen+1;j++)
	{
		cin>>arr[j];
	}
	while(k<=maxlen)
	{
	k=braces(arr,k,0,0);
	k++;
		
	}
	cout<<globdpth<<" "<<globpos<<maxsymbol<<" "<<endl;
}
