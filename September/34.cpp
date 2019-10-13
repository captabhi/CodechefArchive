#include <bits/stdc++.h>
using namespace std;
int isnum(char c)
{
	int ch=c-'0';
	if(ch>=0&&ch<=9)
	{
		return 1;
	}
	else
	return 0;
}
string formstring(string s,int i,int j)
{
	string s1;
	cout<<i<<" "<<j<<endl;
	for(int k=i;k<=j;k++)
	{
		s1[k-i]=s[k];
	}
	//cout<<s1<<endl;
	return s1;
}
int main() {
	//code
	string t;
	getline(cin,t);
	int tt=stoi(t);
	while(tt--)
	{
	    string s;
	    int l=0;
	    getline(cin,s);
	    string s2[s.length()];
	    for(int i=0;i<s.length();i++)
	    {
	    	int flag;
	        if(s[i]==' ')
	        {
	            int num=s[i+1]-'0';
	            if(num>=0&&num<9)
	            {
	            	
					for(int j=i+1;;j++)
	            	{
	            		//cout<<s[j]<<endl;
						if(isnum(s[j])==0)
	            		{
	            			if(s[j]==' ')
	            			{
	            				flag=1;
								break;	
							}
	            			else if(s[j]=='9') 
	            			{
	            				flag=0;
								break;	
							}
	            			
						}
						else
						{
							flag=1;
						}
						//cout<<flag<<endl;
						
					}
					if(flag==1)
						{
							int k;
							for(k=i+1;;k++){
								if(s[k]==' ')
								break;
							}
							s2[l]=formstring(s,i+1,k-1);
							l++;

						}
				}
	        }
	    }
	    for(int m=0;m<l;m++)
	    cout<<s2[m]<<endl;
	}
}
