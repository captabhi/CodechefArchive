#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll int prefix[1000007];
 ll int val;

void  DCC(long long int x1,long long int y1,long long int r1,long long int x2,long long int y2,long long int r2,long double &maxdist, long double &mindist)
{
	double distcc=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	double rsum=r1+r2;
	long long int maxr=r1>r2?r1:r2;
	long long int minr=r1>r2?r2:r1;
	 if(distcc>=rsum)
	{
	
		maxdist=distcc+rsum;
		mindist=distcc-rsum;
		//cout<<"1 "<<maxdist<<" "<<mindist<<endl;
	
	}
	else if(rsum>distcc&&distcc>maxr)
	{
		maxdist=distcc+r1+r2;
		mindist=0;
		//cout<<"2 "<<maxdist<<" "<<mindist<<endl;
	
	}
	else if(distcc<maxr&&distcc>0&&distcc+minr>maxr)
	{
		maxdist=r1+r2+distcc;
		mindist=0;
		//cout<<"3 "<<maxdist<<" "<<mindist<<endl;
		
	}
	else if(maxr==r1&&distcc+minr<maxr&&distcc>0)
	{
		maxdist=r1+r2+distcc;
		mindist=maxr-distcc-r2;
		//cout<<"4 "<<maxdist<<" "<<mindist<<endl;
	
	}else if(maxr==r2&&distcc+minr<maxr&&distcc>0)
	{
		maxdist=r1+r2+distcc;
		mindist=maxr-distcc-r1;
		//cout<<"5 "<<maxdist<<" "<<mindist<<endl;
	
	}
	else if(distcc==0)
	{
		maxdist=rsum;
		mindist= r1>r2?r1-r2:r2-r1;
		//cout<<"6 "<<maxdist<<" "<<mindist<<endl;
	
	}
	
	//cout<<maxdist<<" "<<mindist<<endl;
}
int main()
{
	srand(time(0));
	 ios_base::sync_with_stdio(false);
	  cin.tie(NULL);
	long long int n,q;
	cin>>n>>q;
	long long int arr[n][3];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
		
	}
		long long int distarrsize=n*(n-1)/2;
		
		int k=0;
		
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			long double  maxdist,mindist;
			DCC(arr[i][0],arr[i][1],arr[i][2],arr[j][0],arr[j][1],arr[j][2],maxdist,mindist);
			ll int h=floor(maxdist)+1;
			ll int l=ceil(mindist);
			prefix[h]--;
			prefix[l]++;
		}
	}
	//ll int sum=prefix[0];
	for(int i=1;i<1000007;i++)
	{
		prefix[i]+=prefix[i-1];
	}
	for(int i=0;i<q;i++)
	{
		cin>>val;
		cout<<prefix[val]<<endl;;
			
	}
}
