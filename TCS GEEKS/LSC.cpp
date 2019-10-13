#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	
	int arr[s1.length()+1][s2.length()+1];
	for(int i=0;i<=s1.length();i++)
	{
		arr[i][0]=0;
	}
	for(int i=0;i<=s2.length();i++)
	{
		arr[0][i]=0;
	}
	
	for(int i=1;i<=s1.length();i++)
	{
		for(int j=1;j<=s2.length();j++)
		{
			if(s1[i-1]==s2[j-1])
			{
				arr[i][j]=1+arr[i-1][j-1];
			}
			else
			{
				arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
			}
		}
	}
		/*int i=s1.length();
		int j=s2.length();
		while(1)
		{
			//cout<<arr[i][j]<<" ";
			if(arr[i][j-1]+1==arr[i][j]&&arr[i-1][j]+1==arr[i][j])
			{
				cout<<s1[i-1]<<" ";
				i--;
				j--;
			}
			else if(arr[i-1][j]==arr[i][j]&&arr[i][j-1]<arr[i][j])
			{
				i--;
			}
			else if(arr[i-1][j]<arr[i][j]&&arr[i][j-1]==arr[i][j])
			{
				j--;
			}
			if(i<=0&&j<=0)
			break;

		}
		*/
	
	for(int i=0;i<=s1.length();i++)
	{
		for(int j=0;j<=s2.length();j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
