#include<iostream>
using namespace std;
int main()
{
	while(1)
	{
	string s;
	cin>>s;
	if(s[0]=='\0')
	break;
	int cnta=0,cntb=0,j=4,flag=0,i,k=4;
	for(i=0;i<10;i++)
	{
		if(i%2==0&&i>1)
	    	j--;
	    if(i%2!=0&&i>1)
	    	k--;	
		if(i%2==0)
		{
			if(s[i]=='1')
			cnta++;
			if(cnta+j<cntb&&flag==0)
			flag=i+1;
            if(cntb+k<cnta&&flag==0)
			flag=i+1;
			
		}
		else
		{
			if(s[i]=='1')
			cntb++;
			if(cntb+k<cnta&&flag==0)
			flag=i+1;
			if(cnta+j<cntb&&flag==0)
			flag=i+1;
		}
      		
	}
	if(cnta>cntb)
      cout<<"TEAM-A"<<" "<<flag<<endl;
      else if(cntb>cnta)
      cout<<"TEAM-B"<<" "<<flag<<endl;
      else
      {
      	 
		 cnta=0;cntb=0;	
		  for(i=10;i<20;i+=2)
			{
				
			 if(s[i]=='1')
			cnta++;	
			if(s[i+1]=='1')
			cntb++;	
			
			if(cnta>cntb)
      	 {
      	 	cout<<"TEAM-A"<<" "<<i+2<<endl;
      	 	break;
		   }
      		
         else if(cntb>cnta)
         {
         	cout<<"TEAM-B"<<" "<<i+2<<endl;
         	break;
		 }
			
	}
      if(cnta==cntb)
	  cout<<"TIE"<<endl;	
	  }	
	}
	
}
