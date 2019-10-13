#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int arr[4],cnt=0,i,flag=0;
		for(i=0;i<4;i++)
		{
			cin>>arr[i];
		}
	
		for(int i=0;i<4;i++)
		{
			if(arr[i]==-1)
			continue;
			for(int j=i+1;j<4;j++)
			{
				if(arr[i]==arr[j])
				{
					cnt++;
					arr[j]=-1;
					//cout<<i<<" "<<j<<endl;
					break;
				}
			}
		}
		if(cnt>=2)
		{
			cout<<"YES\n";
		}
		else
		cout<<"NO\n";		
	}
}
