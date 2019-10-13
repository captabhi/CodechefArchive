#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;
int main()
{
 int t,n,len,i,j,k,flag;
 unsigned int a;
 
 cin>>t;
 while(t--)
 {
 	string s;
	 cin>>s;
 	len=s.length();
 	i=0;
 //	int k=stoi(s);
 k=0;
 j=0;
flag=(-1);
string p;
 	while(i!=len)
 	{
 		k=0;
		 for(j=0;j<len;j++)
 		{
 		  if(j!=i)
 		  {
 		  	p[k]=s[j];
 		  	k++;
		   }
		    
		 }
		 p+="\0";
		
 		a=atoi(p.c_str());
 		
 		if(a%6==0)
 		{
 			flag=1;
 			break;
		 }
		 else
		 {
		 	flag=(-1);
		 }
		 i++;
	 }
	 if(flag==1)
	 {
	 	for(int m=0;m<=k;m++)
		cout<<p[m];
		cout<<endl;
	 }
	 else if(flag==(-1))
	 cout<<flag<<endl;
	 
 	
	 }	
	
}
