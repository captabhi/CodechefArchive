#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		char res='f';
		int break1=0,break2=0,sum=0;
		for(int i=0;i<n;i++)
		{
			string s1,s2;
			cin>>s1>>s2;
			sum=0;
			if(s1[0]=='c')
			{
				for(int j=0;j<s2.length();j++)
				{
					if(s2[j]=='0')
					{
						res='i';
					break1=1;
		
					}
								}
			}
			else if(s1[0]=='w'&&break1==0&&break2==0)
			{
				for(int j=0;j<s2.length();j++)
				{
					if(s2[j]=='1')
					{
					sum+=1;	
					}
					//cout<<sum<<endl;
					if(sum==s2.length())
					{
						res='w';
						break2=1;
						//cout<<"HOLa\n";
					}
				}
			}
			
			
		}
		if(res=='f')
		cout<<"FINE\n";
		else if(res=='w')
		cout<<"WEAK\n";
		else if(res=='i')
		cout<<"INVALID\n";
		
	}
}
