#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k=0;
		cin>>n;
		string s[n];
		double prevtime[n];
		double time=0;
		for(int j=0;j<n;j++)
		{
			//cout<<time<<endl;
			string temp;
			cin>>temp;
			int flag=0;
			double curtime=0;
			bool hand;
			//double arr[26]={0};
			for(int i=0;i<k;i++)
			{
				if(temp==s[i])
				{
					curtime+=prevtime[i]/2;
					flag=1;
					time+=curtime;
					break;
					
				}
			}
			if(flag==1)
			continue;
			curtime+=0.2;
			s[k]=temp;
			
			if(temp[0]>'g')
			{
				hand=1;
			}	
			else
			{
				hand=0;
			 } 	
			for(int i=1;i<temp.length();i++)
			{
				//bool temp;
				if(temp[i]>'g')
				{
					if(hand==1)
					{
						curtime+=0.4;	
					}
					else
					{
						curtime+=0.2;		
					}
					hand=1;
				}
				else
				{
					if(hand==1)
					{
						curtime+=0.2;
						
					}
					else
					{
						curtime+=0.4;		
					}
					hand=0;
				}
			}
			prevtime[k]=curtime;
			time+=curtime;
			k++;
			//cout<<curtime<<" ";
		}
		cout<<time*10<<endl;
	}
}
