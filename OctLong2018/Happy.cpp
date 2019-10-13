#include<bits/stdc++.h>
#define range 100
using namespace std;

struct A {
	 long long int c;
	 long long int b;
	 long long int a;
};
struct Comp
{
   bool operator()(const A& s1, const A& s2)
   {
       return s1.c < s2.c; 
   }
};
long long int arr1[100007],arr2[100007],arr3[100007];
long long int max1=0,n,kites;


long long int  binary(long long int l,long long int h)
{
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
			*/
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
int main()
{
	
	srand(time(0));
	int t=100;
	while(t--)
	{
	
	 
	//vector <int,pair<int,int>> bcd;
	//cin>>n>>kites;
	n=rand()%50;
	kites=rand()%50;
	long long int m=kites;
	vector <A> vect;
	//cout<<n<<m<<endl;
	A temp;
	for(int i=0;i<n;i++)
	{
		//cin>>temp.a;
		temp.a=rand()%range+1;
		arr1[i]=temp.a;
		vect.push_back(temp);
	 }
	 long long int temp2,tempmax=0;
	 for(int i=0;i<n;i++)
	{
		temp2=rand()%range+1;
		arr2[i]=temp2;
		vect[i].b=temp2;
		vect[i].c=vect[i].a*vect[i].b;
		arr3[i]=vect[i].c;
		if(arr3[i]>tempmax)
		tempmax=arr3[i];
	 }
	make_heap(vect.begin(),vect.end(),Comp());
//	cout<<endl;
	A max,smax;
	long long int newval;
	while(m>0)
	{
		max=vect[0];
		if(vect[1].c>vect[2].c)
		{
			smax=vect[1];
		}
		else
		smax=vect[2];
		long long int val=smax.c/max.b;
		//cout<<val<<endl;
		
		if(smax.c%max.b==0)
		{
			val--;
		}
		//cout<<val<<endl;
		//out<<m-max.a-val<<" dad\n";
		if(m-(max.a-val)>=0)
		{
			newval=val*max.b;
			//cout<<max.a-val<<" "<<m<<endl;
			m=m-(max.a-val);
			max.a=val;
			max.c=newval;
		}
		else
		{
			newval=m*max.b;
			max.a-=m;
			max.c-=newval;
			m=0;
		}
	//	cout<<m<<endl;
		pop_heap(vect.begin(),vect.end(),Comp());
		vect.pop_back();
		vect.push_back(max);
		push_heap(vect.begin(),vect.end(),Comp());
	/*	for(int i=0;i<n;i++)
	{
		cout<<vect[i].c<<" "<<vect[i].a<<" "<<vect[i].b;
		cout<<endl;
	}*/
	
	}
	//cout<<vect.front().c<<endl;
	binary(0,tempmax);
	cout<<max1-vect.front().c<<endl;
	if(max1-vect.front().c!=0)
	{
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
		
	}
	/*for(int i=0;i<n;i++)
	{
		cout<<vect[i].a<<" "<<vect[i].b<<" "<<vect[i].c<<endl;
	 }
	 */
}
}
