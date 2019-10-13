/* you're welcome
   © Abhishek Mishra
*/
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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	/*#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\ASUS\\Desktop\\test.txt","r",stdin);
        //freopen("C:\\Users\\ASUS\\Desktop\\test.txt","w",stdout);
    #endif
    */
	int q,k;
    cin>>n>>q>>k;
    int maxval=0,smaxval=0,maxpos,smaxpos;
    for(int i=1;i<=n;i++)
    {
        cin>>v1[i];
    }
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
	//cout<<cnt<<endl;
	char  ch;
	if(cnt==n)
	{
		while(q--)
    	{
	        cin>>ch;
	        if(ch=='?')
	        {
	        	cout<<min(k,cnt)<<endl;
			}
		}
		return 0;
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
				cout<<min(k,maxval)<<endl;
			}
        	else
        	{
        	int tempmax=max(max(i%(n+1),maxval-(i%(n+1))),smaxval);
        	cout<<min(tempmax,k)<<endl;
			}
        }
    }

}


