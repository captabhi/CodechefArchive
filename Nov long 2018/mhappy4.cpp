#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define xdiv 1000000007
#define mset(arr,val) memset(arr,val,sizeof(arr));
#define endl "\n"
typedef long long int lli;
typedef long double llf;
using namespace std;
int v1[100001],n;
int cntl(void)
{
	int i=1,cnt=0;
	while(v1[i]!=0)
	{
		cnt++;
		i++;
	}
	return cnt;
}
int cntr(void)
{
	int i=n,cnt=0;
	while(v1[i]!=0)
	{
		cnt++;
		i--;
	}
	return cnt;
}


int main()
{
	int q,k;
    cin>>n>>q>>k;
    int maxval=0,smaxval=0,maxpos,smaxpos;
    for(int i=1;i<=n;i++)
    {
        cin>>v1[i];
    }
    if(n<=1000)
    {


    	int cnt=0,maxcnt=0;
    	for(int i=1;i<=n;i++)
    	{
    		if(v1[i]==1)
    		cnt++;
    		else
    		{

    			cnt=0;
    		}
    		if(cnt>maxcnt)
    			maxcnt=cnt;
		}
	char ch;
	while(q--)
    {
        cin>>ch;
        if(ch=='!')
        {
		 int temp=v1[n];
		 for(int i=n-1;i>=1;i--)
		 {
		 	v1[i+1]=v1[i];
		 }
		 v1[1]=temp;
		 /*for(int i=1;i<=n;i++)
		 {
		 	cout<<v1[i]<<" ";
		 }
		 */
		 //cout<<endl;
        }
        else
        {
        	int cnt=0,maxcnt=0;
	    	for(int i=1;i<=n;i++)
	    	{
	    		if(v1[i]==1)
	    		cnt++;
	    		else
	    		{
	    			cnt=0;
	    		}
	    		if(cnt>maxcnt)
	    			maxcnt=cnt;
			}
			if(maxcnt>=k)
	        cout<<k<<endl;
	        else
	        cout<<maxcnt<<endl;
		}
    }
	}
	else
	{
		int cnt=0;
    for(int i=1;i<=n;i++)
    {
    	if(v1[i]==1)
    	{
    		cnt++;
		}
		else
		{
		if(cnt>maxval)
		{
			int temp=maxval;
			maxval=cnt;
			smaxval=temp;
			maxpos=i-1;
		}else if(cnt>smaxval)
		{
			smaxval=cnt;
		}

		cnt=0;
		}
	}
	char  ch;

	cnt=cntl()+cntr();
	//cout<<cnt<<endl;
	if(cnt>maxval)
	{
		int temp=maxval;
		maxval=cnt;
		maxpos=cntl();
	} else if(cnt>smaxval)
	{
		smaxval=cnt;
	}
    int i=maxpos;
    //cout<<maxval<<" "<<maxpos<<" "<<smaxval<<endl;
    while(q--)
    {
        cin>>ch;
        if(ch=='!')
        {
		i++;
        }
        else
        {
        	if(i==n+1)
        	i=1;
        	if(i%(n+1)>=maxval)
        	{
        		//cout<<"Ohh yeah\n";
				if(maxval>=k)
		        cout<<k<<endl;
		        else
		        cout<<maxval<<endl;
			}
        	else
        	{
        	int tempmax=max(max(i%(n+1),maxval-(i%(n+1))),smaxval);
        	if(tempmax>=k)
	        cout<<k<<endl;
	        else
	        cout<<tempmax<<endl;
			}
        }
    }
	}
 }

