#include<iostream>
using namespace std;
int main()
{
	int t,n,m,i,j,min,cnt=0,ca,cb;
	char vara,varb;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		cnt=0;
		min=0;
		
		char arr[n][m];
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>arr[i][j];
			}
		}
	  	
	  	  for(i=0;i<n;i++)
	  	{
	  		if(i%2==0)
	  		{
	  			vara='R';
	  			ca=3;
	  	        varb='G';
	  	        cb=5;
			  }
			  else
			  {
			  	vara='G';
			  	ca=5;
			  	cb=3;
	  	    	varb='R';
			  }
			  for(j=0;j<m;j++)
	  		{
	  	      if(j%2==0)
				{
					if(arr[i][j]!=vara)
					cnt+=ca;
				}
				else
				{
				   if(arr[i][j]!=varb)
				   cnt+=cb;	
				}	  		
			  }
		  }
		
		  min=cnt;
		  cnt=0;
		  for(i=0;i<n;i++)
	  	{
	  		if(i%2==0)
	  		{
	  			vara='G';
	  	        varb='R';
	  	        ca=5;
			  	cb=3;
			  }
			  else
			  {
			  	vara='R';
	  	    	varb='G';
	  	    	ca=3;
			  	cb=5;
			  }
			  for(j=0;j<m;j++)
	  		{
	  	      if(j%2==0)
				{
					if(arr[i][j]!=vara)
					cnt+=ca;
				}
				else
				{
				   if(arr[i][j]!=varb)
				   cnt+=cb;	
				}	  		
			  }
		  }  
		 if(cnt<min)
		  min=cnt;  
		cout<<min<<endl;	 	
	}
	
}