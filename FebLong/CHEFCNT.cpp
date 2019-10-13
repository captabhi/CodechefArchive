#include<iostream>
using namespace std;
int main()
{
  int t;	
  cin>>t;
  while(t--)
  {
  	 int n,k,m,x,cntevn=0,cntodd=0;
  	cin>>n>>m>>x>>k;
  	char c;
  	for(int i=0;i<k;i++)
  	{
  		cin>>c;
  		if(c=='E')
  		cntevn++;
  		else 
  		cntodd++;
  		
	  }
	  for(int i=1;i<=m;i++)
	  {
	  	if(i%2==0)
	  	{
	  		
	  		if(cntevn-x>0)
	  		{
	  			cntevn-=x;
	  			n-=x;
			  }
			  else 
			  {
			  n-=cntevn;
			  cntevn=0;	
			  }
			  //cout<<n<<" ";
		  }
		  else
	  	{
	  		
	  		if(cntodd-x>0)
	  		{
	  			cntodd-=x;
	  			n-=x;
			  }
			  else 
			  {
			  n-=cntodd;
			  cntodd=0;	
			  }
			  //cout<<n<<" ";
		  }
		  
	  }
	  if(n>0)
	  cout<<"no\n";
	  else
	  cout<<"yes\n";
  	
	  }	
}
