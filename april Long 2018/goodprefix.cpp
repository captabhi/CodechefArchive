#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		long long int n,a=0,b=0,cnt1=0,i,cnt2=0,prevcnt=0,cnt=0,j=0;
		cin>>s>>n;
	do	
	{
		prevcnt=cnt;
		cnt=0;
		cnt2+=prevcnt;
		for(i=0;i<s.length();i++)
		{
			
			
			if(s[i]=='a')
			a++;
			else
			b++;
			if(a>b)
			cnt++;
			
		}
	//	cout<<cnt<<" ";	
		j++;
	}while(prevcnt!=cnt&&j<n);
	if(n==1)
	cout<<cnt<<endl;
	else
	{
	cnt2+=(cnt*(n-j+1));
		
			cout<<cnt2<<endl;	
	}
	
		
	}
	
}
