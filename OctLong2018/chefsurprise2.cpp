#include<bits/stdc++.h>
#define ll long long
//#define range 20
using namespace std;
ll int n,m;
ll int arr[201][201];
ll int dp[201][201];
ll int dp2[201][201];
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
			cout<<dp[i][j]<<" ";
			//arr[i][j]=temp-'0';
		}
		cout<<endl;
	}
}
void printarray3(void)
{
	for(int i=0;i<n;i++)
	{
		//char temp;
		for(int j=0;j<m;j++)
		{
			cout<<dp2[i][j]<<" ";
			//arr[i][j]=temp-'0';
		}
		cout<<endl;
	}
}

void calculate(void)
{
	bool next,upnext;
	ll int min1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			next=1;
			upnext=0;
			min1=m-j<n-i?m-j:n-i;
			int val1=0,val2=0;
			for(int a=i;a<min1+i&&a<n;a++)
			{
				for(int b=j;b<min1+j&&b<m;b++)
				{
					if((a+b)%2==0&&arr[a][b]!=next)
						val1++;
					else if((a+b)%2!=0&&arr[a][b]!=upnext)
						val1++;
					
					//cout<<arr[a][b]<<" ";	
				}
				//cout<<endl;
			}
			dp[i][j]=val1;
			next=0;
			upnext=1;	
			for(int a=i;a<min1+i&&a<n;a++)
			{
				for(int b=j;b<min1+j&&b<m;b++)
				{
					if((a+b)%2==0&&arr[a][b]!=next)
						val2++;
					else if((a+b)%2!=0&&arr[a][b]!=upnext)
						val2++;
				}
			}
			//cout<<val1<<" "<<val2<<endl;
			dp2[i][j]=val2;	
		}
	}
}
int main()
{
	memset(dp,0,sizeof(dp));
	memset(dp2,0,sizeof(dp2));
	////srand(time(0));
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
	
	printarray1();
	cout<<endl;
	calculate();
	printarray2();
	cout<<endl;
	printarray3();
	cout<<endl;
	
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
				ll int temp1=dp[k][j]-query[i];
				ll int temp2=dp2[k][j]-query[i];
				ll int val=m-j<n-k?m-j:n-k;
				if((temp1<1||temp2<1)&&val>maxval)
				{
					maxval=val;
					
				}
			}
		}
		ans[i]=maxval;
		//cout<<query[i]<<" "<<maxval<<endl;
	}
	for(int i=0;i<q;i++)
	{
		cout<<ans[i]<<"\n";
	}
		

}
