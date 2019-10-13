#include<bits/stdc++.h>
int arr1[1000000];
int arr2[1000000][3];
int n;
int min(int a ,int b)
{
	if(a<b)
	return a;
	else return b;
}
int recur(int idx,int rest)
{
	if(idx==n)
	return 0;
	else if (rest==3)
	return INT_MAX;
	else if(arr2[idx][rest]!=-1)
	return arr2[idx][rest];
	else
	{
		arr2[idx][rest]= min(arr1[idx]+recur(idx+1,0),recur(idx+1,rest+1));
		return arr2[idx][rest]; 
	}
	
}
using namespace std;
int main()
{
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
		arr2[i][0]=arr2[i][1]=arr2[i][2]=-1;
	}
	
	arr2[n-1][2]=arr1[n-1];
	
	int ans=recur(0,0);
	cout<<ans<<endl;
	
	
	
}

