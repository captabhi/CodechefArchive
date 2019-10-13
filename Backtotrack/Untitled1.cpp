#include<iostream>
using namespace std;
bool checkpalindrome(string s)
{
	for(i=0,j=s.length()-1;i<j;)
	{
		if(s[i]==s[j])
		{
			i++;
			j--;
		}
		else
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int i,j;
		for(i=0,j=len-1;i<j;)
		{
			if(s[i]==s[j])
			{
				i++;
				j--;
				
				
			}
			else if(s[i+1]==s[j])
			{
				count++;
				i++;
				
	
			}
			else if(s[i]==s[j-1])
			{
				count++;
				len-=2;
				j--;
			}
			else
			{
				cout<<count<<endl;
				count++;
				flag=1;
				break;
			}
		}
		
	}
}
