#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    unsigned long long int arr[n];
	    unsigned long long sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    
	    int pre[n+1]={0},suf[n+1]={0};
	    pre[0]=arr[0];
	    suf[0]=sum;
	    for(int i=1;i<n;i++)
	    {
	        pre[i]=arr[i]+pre[i-1];
	        suf[i]=suf[i-1]-arr[i-1];
	        
	    }
	    for(int i=0;i<n;i++)
	    {
	     cout<<pre[i]<<" ";   
	    }
	    cout<<endl;
	    for(int i=0;i<n;i++)
	    {
	     cout<<suf[i]<<" ";   
	    }
	    cout<<endl;
	    
	    int flag=0;
	    for(int i=0;i<n;i++)
	    {
	        
			if(pre[i]==suf[i])
	        {
	            cout<<i+1<<endl;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    cout<<-1<<endl;
	    
	    
	}
}
