#include<bits/stdc++.h>
#define range 1000
using namespace std;
struct A {
	 long long int c;
	 long long int b;
	 long long int a;
}B[100007];
long long int lastcutval,differ;
struct Comp
{
   bool operator()(const A& s1, const A& s2)
   {
       return s1.c < s2.c; 
   }
};
long long int arr1[100007],arr2[100007],arr3[100007];
long long int max1=0,n,kites;
long long int arr[100007]={0};


/*long long int  binary(long long int l,long long int h)
{
	//cout<<h;
	if(l>h)
	{
		return -1;
	}
	else
	{
		long long int m=(l+h)/2;
		//cout<<m<<" ";
		long long int cut=0;
		max1=0;
		for(int i=0;i<n;i++)
		{
			if(arr2[i]==0)
			continue;
			int cval=m/arr2[i];
			/*if(m%arr2[i]!=0)
			cval++;      //critical zone 
			
		//	cout<<m<<endl;
			
		
			if(arr1[i]>=cval)
			{
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
			h=m-1;
			binary(l,h);
			}
		else if(cut==kites)
		 {
			return -1;	 	
			 }	
	}
	
}
*/
long long int  binary(long long int l,long long int h)
{
	//cout<<h<<" ";
	if(l>h)
	{
		for(int i=0;i<n;i++)
		{
			if(arr2[i]==0)
			continue;
			int cval=lastcutval/arr2[i];
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
			int cval=m/arr2[i];
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
	srand(time(0));
	int t=100;
	while(t--)
	{
	//cin>>n>>kites;
	n=rand()%range;
	kites=rand()%range;
	long long int tempmax=0;
	
	for(int i=0;i<n;i++)
	{
		B[i].a=rand()%range;
		//cin>>B[i].a;
		arr1[i]=B[i].a;
	}
	for(int i=0;i<n;i++)
	{
		B[i].b=rand()%range;
		//cin>>B[i].b;
		arr2[i]=B[i].b;
		B[i].c=B[i].b*B[i].a;
		arr3[i]=B[i].c;
		if(B[i].c>tempmax)
		tempmax=B[i].c;
	}
	int temp=kites;
	max1=tempmax;
	
	sort(B,B+n,Comp());
	while(temp--)
	{
		B[n-1].a--;
		B[n-1].c=B[n-1].a*B[n-1].b;
		sort(B,B+n,Comp());
	}
	//cout<<B[n-1].c;
	if(kites!=0)
	binary(0,tempmax);
	int max2=B[n-1].c>0?B[n-1].c:0;
	if(max1-max2!=0)
	{
		cout<<max1<<"    "<<max2<<endl;
		cout<<n<<" "<<kites<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<arr1[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<arr2[i]<<" ";
		}
		cout<<endl;
		
		cout<<" /////////////\n";
	}

	}
}

