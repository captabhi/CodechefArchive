#include<bits/stdc++.h>
#define ll long long
//#define range 20
using namespace std;
ll int n,m;
ll int arr[201][201];
ll int dp[201][201][201];
ll int prefixsum[201][201][2];
void printarray1(void)
{
	for(int i=0;i<n;i++)
	{
		//char temp;
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
			//arr[i][j]=temp-'0';
		}
		cout<<endl;
	}
}
void printarray2(void)
{
	for(int i=0;i<n;i++)
	{
		//char temp;
		for(int j=0;j<m;j++)
		{
			cout<<prefixsum[i][j][0]<<" "<<prefixsum[i][j][1]<<"|";
			//arr[i][j]=temp-'0';
		}
		cout<<endl;
	}
}
void prepare(void)
{
	bool next=1,upnext=0;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
			next=1,upnext=0;
		else
			next=0,upnext=1;
		ll int val1=0,val2=0;
		for(int j=0;j<n;j++)
		{
			if(j%2==0)
			{
				if(arr[i][j]!=next)
				val1++;
				else
				val2++;	
			}
			else{
				if(arr[i][j]!=upnext)
				val1++;
				else 
				val2++;
			}
		prefixsum[i][j][0]=val1;
		prefixsum[i][j][1]=val2;
		}
	}
}

void calculate(void)
{
	ll int min1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			min1=m-j<n-i?m-j:n-i;
			for(int k=i;k<min+)
		}
	}
}
int main()
{
	memset(dp,0,sizeof(dp));
	ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	srand(time(0));
	cin>>n>>m;
	//n=rand()%range;
	//m=rand()%range;
	//cout<<n<<" "<<m<<endl;
	for(int i=0;i<n;i++)
	{
		char temp;
		for(int j=0;j<m;j++)
		{
			cin>>temp;
			//arr[i][j]=rand()%2;
			arr[i][j]=temp-'0';
		}
	}
	//calculate();
	prepare();
	printarray2();
	/*printarray1();
	cout<<endl;
	
	
	cout<<endl;
	*/
	ll int q;
	cin>>q;
	//q=rand()%range;
	ll int query[q],ans[q];
	for(int i=0;i<q;i++)
	{
		ll int maxtemp=0,val,maxval=0;
		cin>>query[i];
		//query[i]=rand()%range;
		//	cout<<" \n";
		//cout<<query[i]<<endl;
		
		for(int k=0;k<n;k++)
		{
			for(int j=0;j<m;j++)
			{
				val=m-j<n-k?m-j:n-k;
				maxtemp=val;
				for(int t=0;t<val;t++)
				{
					//cout<<dp[k][j][t]<<" ";
					ll int temp=dp[k][j][t]-query[i];	
					if(temp<1&&maxtemp>maxval)
					{
						maxval=maxtemp;
						
					}
					maxtemp--;	
				}
				//cout<<endl;
				
			}
		}
		ans[i]=maxval;
		
		//cout<<query[i]<<" "<<maxval<<endl;
	}
	//cout<<"\n";
	for(int i=0;i<q;i++)
	{
		cout<<ans[i]<<"\n";
	}
		

}
