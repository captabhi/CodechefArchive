/* you're welcome
   © Abhishek Mishra
*/
#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++
typedef long long int lli;
typedef long double llf;
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		lli arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int max1=n-1,min1=0,maxpos,cnt=1;
		while(1)
		{
			int maxval=0;
			if(min1>max1)
			{
				break;
			}
			for(int i=min1;i<=max1;i++)
			{
				if(arr[i]>=maxval)
				{
					maxval=arr[i];
					maxpos=i;
				}
				
			}
			if(max1-maxpos>maxpos-min1)
			{
				max1=maxpos-1;
			}
			else
			{
				min1=maxpos+1;
			}
			cnt++;
			
			}
			cout<<cnt<<endl;


	}


}

