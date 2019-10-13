#include<bits/stdc++.h>
using namespace std;
long long int arr1[100007],arr2[100007],arr3[100007];
long long int max1=0,n,kites;
long long int arr[100007]={0};
long long int lastcutval,differ;
	
long long int  binary(long long int l,long long int h)
{
	//cout<<h<<" ";
	if(l>h)
	{
		
		//cout<<"Lastval "<<lastcutval<<" "<<differ<<endl;	
		for(int i=0;i<n;i++)
		{
			if(arr2[i]==0)
			continue;
			long long int cval=lastcutval/arr2[i];
			if(arr1[i]>=cval)
			{
				//cout<<cval<<endl;
				 arr3[i]=cval*arr2[i];
				 //cout<<arr3[i]<<" ";
			}
			
		}
		//cout<<"\n";
		sort(arr3,arr3+n);
		max1=arr3[n-1];
		//cout<<" Max"<<endl;
		
		//cout<<"No answer\n";	
		return -1;
		
	}
	else
	{
		memset(arr,-1,sizeof(arr));
		long long int m=(l+h)/2;
		//cout<<m<<endl;
		//cout<<m<<" ";
		long long int cut=0;
		max1=0;
		for(int i=0;i<n;i++)
		{
			if(arr2[i]==0)
			continue;
			long long int cval=m/arr2[i];
			
			/*if(m%arr2[i]!=0)
			cval++;      //critical zone 
			*/
		//	cout<<m<<endl;
			
		
			if(arr1[i]>=cval)
			{
				//cout<<cval<<endl;
				 arr[i]=cval;
				 cut+=(arr1[i]-cval);
				 if(cval*arr2[i]>max1)
				 {
				 	max1=cval*arr2[i];
				 }
			}
			
		}
		//cout<<cut<<endl;
		if(cut>kites)
		{
			l=m+1;
			binary(l,h);
		}
		else if(cut<kites)
		{
			lastcutval=m;
			differ=kites-cut;
			h=m-1;
			binary(l,h);
			
			}
		else if(cut==kites)
		 {
		 	long long tempmax=max1;
		 	//cout<<"running;";
		 	for(int i=0;i<n;i++)
		 	{
		 		//cout<<arr[i]<<" "<<arr1[i]<<endl;
				 if(arr[i]!=-1)
		 		{
		 			arr1[i]=arr[i];
		 			//cout<<arr1[i]*arr2[i]<<" ";
					 	
				 }
				 if(arr1[i]*arr2[i]>max1)
					{
						max1=arr1[i]*arr2[i];
						 }
		 		
			 }
			return -1;	 	
			 }	
	}
	
}
int main()
{
	cin>>n>>kites;
	long long int tempmax=0;
	long long arraysum=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
		arraysum+=arr1[i];
	}
	
	
	for(int i=0;i<n;i++)
	{
		cin>>arr2[i];
		arr3[i]=arr2[i]*arr1[i];
		if(arr3[i]>tempmax)
		tempmax=arr3[i];
	}
	max1=tempmax;
	if(arraysum<=kites)
	{
		cout<<0<<endl;
		return 0;	
	}else if(kites==0)
	{
		cout<<tempmax<<endl;
		return 0;
	}
	
	binary(0,tempmax);
	cout<<max1<<endl;
	
}
