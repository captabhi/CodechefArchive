#include<iostream>
#include<algorithm>
using namespace std;
int check(char arr[])
{
	if(arr[0]=='c'&&arr[1]=='e'&&arr[2]=='f'&&arr[3]=='h')
	return 1;
	else return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		unsigned int sum=0,cnt=0,i,sum2=0,k=0;
		//char arr[500000];
		cin>>s;
		if(s.length()<4)
		{
			cout<<"normal\n";
			continue;
		}
		char arr[4];
		for(i=0;i<s.length()-3;i++)
		{
			k=0;
			for(int j=i;j<i+4;j++)
			{
				arr[k]=s[j];
				k++;
			}
			sort(arr,arr+4);
			//cout<<arr<<endl;
			if(check(arr)==1)
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
