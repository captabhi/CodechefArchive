#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;long long int n,i,j,a=0,b=0,cnt=0;
		cin>>s>>n;
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<s.length();j++)
			{
				
				if(s[j]=='a')
				a++;
				else
				b++;
				if(a>b)
				cnt++;
			}
			//cout<<cnt<<" ";
			
		}
		
		cout<<cnt<<endl;
		
		
	}
}
