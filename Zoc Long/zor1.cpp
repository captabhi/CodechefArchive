#include<iostream>
#include<cstdio>
#include<algorithm>
#define M 1000000007
using namespace std;
int main()
{
	unsigned  int t,n,i,maxl=0,maxb=0,maxh=0;
	unsigned  int l,b,h,x,y,z,var;
	
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d",&n);
		scanf("%d",&l);
		scanf("%d",&b);
		scanf("%d",&h);
		unsigned  int len[n+1];
		unsigned  int bed[n+1];
		unsigned  int hei[n+1];
		for(i=0;i<n;i++)
		{
	     scanf("%d",&len[i]);
		 scanf("%d",&bed[i]);
		 scanf("%d",&hei[i]);   		
		}
		len[n]=l;
		bed[n]=b;
		hei[n]=h;
		sort(len,len+n+1);
		sort(bed,bed+n+1);
		sort(hei,hei+n+1);
		maxl=len[0];
		maxb=bed[0];
		maxh=hei[0];
		for(i=0;i<n;i++)
		{
		  if((len[i+1]-len[i])>maxl)
		  maxl=(len[i+1]-len[i])%M;
		  if((bed[i+1]-bed[i])>maxb)
		  maxb=(bed[i+1]-bed[i])%M;
		  if((hei[i+1]-hei[i])>maxh)
		  maxh=(hei[i+1]-hei[i])%M;	
		}
		
		var=(maxh%M)*(maxb%M)*(maxl%M);
		var=var%M;
		printf("%d\n",var);
		
		
		
	}
}
