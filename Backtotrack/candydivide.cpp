	#include<iostream>
	using namespace std;
	int main()
	
	{
		int t;
		cin>>t;
		while(t--)
		{
			long long int n,c;
			cin>>n>>c;
			long long int temp;
			for(int i=0;i<n;i++)
			{
				cin>>temp;
				c-=temp;
			}
			if(c<0)
			{
				cout<<"No\n";
			}
			else
			cout<<"Yes\n";
			
		}
	}
