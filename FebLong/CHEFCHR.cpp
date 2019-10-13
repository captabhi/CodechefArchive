#include<iostream>
using namespace std;
int check(char a)
{
	switch(a)
	{
		case 'c': return 1;
				  break;
		case 'h': return 1;
					break;
		case 'e': return 1;
					break;
					
		case 'f': return 1;
					break;
		
	}
	return 0;
}
int main()
{
	 int t;
	cin>>t;
	while(t--)
	{
		string s;
		unsigned int sum=0,cnt=0,i,sum2=0;
		//char arr[500000];
		cin>>s;
		if(s.length()<4)
		{
			cout<<"normal\n";
			continue;
		}
		int j=0;
		sum+=(s[0]-'a');
		sum+=(s[1]-'a');
		sum+=(s[2]-'a');
		sum+=(s[3]-'a');
		for(j=0;j<=3;j++)
		{
			sum2+=check(s[j]);
		}
		//cout<<sum2<<endl;
		if(sum==18&&sum2==4)
		cnt++;
		
		for(i=3;i<s.length()-1;i++)
		{
			sum2=0;	
			sum-=(s[i-3]-'a');
			sum+=(s[i+1]-'a');
			for(j=i-2;j<=i+1;j++)
			{
				sum2+=check(s[j]);
			}
			//cout<<sum<<endl;
			if(sum==18&&sum2==4)
			cnt++;
		}
		if(cnt>0)
		{
			cout<<"lovely "<<cnt<<endl;
		}
		else
		cout<<"normal\n";
		
	}
}
