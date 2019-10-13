#include<bits/stdc++.h>
#define loop(i, a, b) for (int i = (a); i < (b); i++)
using namespace std;
int printSubsequences(int arr[], int n,int m)
{
	int cnt=0;
    unsigned int opsize = pow(2, n);   
    for (int counter = 1; counter < opsize; counter++)
    {
    	int sum=0;
        for (int j = 0; j < n; j++)
        {
            if(j==n-1&&counter==opsize-1)
            continue;
            if (counter & (1<<j))
            {
            //	cout<<arr[j]<<" ";
            	sum+=arr[j];    
			}
		                        
		}
			//cout<<endl;
			if(sum%m==0)
            cnt++;
        
    }
    return cnt;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,cnt=0;
		cin>>n>>m;
		int arr[n];
		vector<int> arr2;
		
		loop(i,0,n)
		{
			cin>>arr[i];
			if(arr[i]%m==0)
			{
				cnt++;
				}	
		}
				cout<<pow(2,cnt)-1<<endl;
		
	}
}
