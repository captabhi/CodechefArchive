#include<iostream>
using namespace std;
int main()
{
	unsigned int n,cnt=0,maxcnt=1,firpos=0,maxpos=0,i;
	cin>>n;
	int arr[n+1];
	for(i=1;i<=n;i++)
	cin>>arr[i];
	for(i=1;i<=n;i++)
	{
		cnt=0;
		if(arr[i]==1)
		{
			firpos=i;
			while(arr[i]!=2)
			{
			 cnt++;
			 i++;	
			}
			if(cnt>=maxcnt)
			{
			maxcnt=cnt;
			maxpos=(firpos+maxcnt-1);
			cout<<maxcnt<<" "<<maxpos<<endl;	
			}
			
			
		}
		
	}
	cout<<maxcnt<<" "<<maxpos;
	
}
