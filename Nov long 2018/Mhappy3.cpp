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
		
	/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\ASUS\\Desktop\\test.txt","r",stdin);
        //freopen("C:\\Users\\ASUS\\Desktop\\test.txt","w",stdout);
    #endif
    */
    int t;
    cin>>t;
    while(t--)
    {
	
	int q,k;
	//n=rand()%val+1;
    //q=rand()%val+1;
    //k=rand()%val+1;
    //cout<<n<<" "<<q<<" "<<k<<endl;
    
    cin>>n>>q>>k;
    int maxval=0,smaxval=0,maxpos,smaxpos;
    for(int i=1;i<=n;i++)
    {
        cin>>v1[i];
       //v1[i]=rand()%2;
       //cout<<v1[i]<<" ";
    }
    //cout<<endl;
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
	
	int ch;
    int i=maxpos;
    //cout<<maxval<<" "<<maxpos<<" "<<smaxval<<endl;
    int queue[q];
    for(int i=0;i<q;i++)
    {
    	//queue[i]=rand()%2;
    	//cout<<queue[i]<<" ";
    	cin>>queue[i];
	}
	//cout<<endl;
    while(q--)
    {
        //cin>>ch;
        ch=queue[q];
        //cout<<ch<<" "<<endl;
        if(ch==0)
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


