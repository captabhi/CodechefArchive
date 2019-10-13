#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
	 long long int cnt=0;
	 unsigned int n,k,i,j,pos,temp;
	 scanf("%d",&n);
	 scanf("%d",&k);
	 unsigned int arr[n];
	 j=0;
	 for( i=0;i<n;i++)
	 {
	 scanf("%d",&temp);
	 if(temp<k)
	 {
	 	arr[j]=temp;
	 	j++;
		 }	
	 }
	 
	 sort(arr,arr+j);
	 j--;
	 i=0;
	 while(i<j)
	 {
	 	if(arr[i]+arr[j]<k)
	 		{
	 		   cnt+=(j-i);
	 		   i++;	
			 }
			 else
			 j--;
	 	
	 }
	 cout<<cnt<<endl;
}
