#include<iostream>
#include<algorithm>
int search1(int a[],int n,int e)
{
    int f,l,m;
    f=0;
    l=n-1;
    
    while(f<=l)
    {
        m=(f+l)/2;
        if(a[m]<=e&&e<a[m+1])
            return(m);
        else
            if(e>a[m])
                f=m+1;
            else
                l=m-1;
    }
    
    return -1;
}
int search2(int a[],int n,int e)
{
    int f,l,m;
    f=0;
    l=n-1;
    
    while(f<=l)
    {
        m=(f+l)/2;
        if(a[m]>=e&&a[m-1]<e)
            return(m);
        else
            if(e>a[m])
                f=m+1;
            else
                l=m-1;
    }
    
    return -1;
}
using namespace std;

int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	int arr[n][2];
	int arrx[x],arry[y];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i][0]>>arr[i][1];
	}
	for(int i=0;i<x;i++)
	{
		cin>>arrx[i];
	}
	for(int i=0;i<y;i++)
	{
		cin>>arry[i];
	}
	sort(arrx,arrx+x);
	sort(arry,arry+y);
	/*for(int i=0;i<x;i++)
	{
		cout<<arrx[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<y;i++)
	{
		cout<<arry[i]<<" ";
	}
	*/
	//cout<<endl;
	int time,mintime=10000000;
	for(int i=0;i<n;i++)
	{
		int startx=arr[i][0],j,k;
		int endy=arr[i][1];
		if(startx<arrx[0])
		continue;
		if(endy>arry[y-1])
		continue;
		//cout<<"Checking for"<<startx<<" "<<endy<<endl;
		/*for( j=0;j<x;j++)
		{
			if(arrx[j]>startx)
			break;
		}
		
		j--;
		*/
		j=search1(arrx,x,startx);
		/*for(k=0;k<y;k++)
		{
			if(arry[k]>=endy)
			break;
		}*/
		k=search2(arry,y,endy);
		//cout<<"Best Value:"<<arrx[j]<<" "<<arry[k]<<" "<<endl;
		time=startx-arrx[j]+arry[k]-endy+(endy-startx);
		if(time<mintime)
		mintime=time;
		
	}
	cout<<mintime+1<<endl;
}
