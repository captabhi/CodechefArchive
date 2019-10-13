#include<iostream>
using namespace std;
int main()
{
	int t,cnta=0,cntb=0,idx,f,l;
	char prev;
	cin>>t;
	string s;
	
	while(t--)
	{
	 prev=0;
	 cin>>s;
	 l=s.length();
	 cnta=0;cntb=0;
	 for(int i=0;i<l;i++)
	 {
	 	
		 
		 if(s[i]=='A')
	 	{
	 	  cnta++;
	 	  prev=s[i];
	 	  idx=i;
	 	
		}
	 	 else if(s[i]=='B')
	 	 {
	 	   cntb++;
			prev=s[i];
			idx=i; 	
			
		  }
	 	 else if(s[i]=='.')
	 	{
	 	      f=i+1;
			 while(f<l&&s[f]=='.')
			 {
			 	f++;
			 }
			 
			 if((prev=='A')&&(s[f]=='A'))
			 cnta+=(f-idx-1);
			  if((prev=='B')&&(s[f]=='B'))
			 cntb+=(f-idx-1);
			 i=f-1;
			 }
	 	
	 }
	 
	 cout<<cnta<<" "<<cntb<<endl;
	 	
	}
	
}
