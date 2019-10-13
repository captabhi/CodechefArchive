/* you're welcome
   © Abhishek Mishra
*/
#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define xdiv 1000000007
#define mset(arr,val) memset(arr,val,sizeof(arr));
#define endl "\n"
#define val 10
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
	srand(time(0));
	#ifndef ONLINE_JUDGE
        //freopen("C:\\Users\\ASUS\\Desktop\\test.txt","r",stdin);
        //freopen("C:\\Users\\ASUS\\Desktop\\output.txt","w",stdout);
    #endif
	int q,k;
    //cin>>n>>q>>k;
    int t;
    cin>>t;
    while(t--)
    {
	
    n=rand()%val+1;
    q=rand()%val+1;
    k=rand()%val+1;
    cout<<n<<" "<<q<<" "<<k<<endl;
    int maxval=0,smaxval=0,maxpos,smaxpos;
    for(int i=1;i<=n;i++)
    {
       // cin>>v1[i];
       v1[i]=rand()%2;
       cout<<v1[i]<<" ";
    }
    cout<<endl;
    	int cnt=0,maxcnt=0;
    	for(int i=1;i<=n;i++)
    	{
    		if(v1[i]==1)
    		cnt++;
    		else 
    		{
    			if(cnt>maxcnt)
    			maxcnt=cnt;
    			cnt=0;
    		}
		}
		int ch;
	int queue[q];
    for(int i=0;i<q;i++)
    {
    	queue[i]=rand()%2;
    	cout<<queue[i]<<" ";
	}
	cout<<endl;
	while(q--)
    {
        //cin>>ch;
        ch=queue[q];
        if(ch==0)
        {
		 int temp=v1[n];
		 for(int i=n-1;i>=1;i--)
		 {
		 	v1[i+1]=v1[i];
		 }
		 v1[1]=temp;
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
	    			if(cnt>maxcnt)
	    			maxcnt=cnt;
	    			cnt=0;
	    		}
			}
			if(maxcnt>=k)
	        cout<<k<<endl;
	        else
	        cout<<maxcnt<<endl;	
			}
		}
	}
	}	



