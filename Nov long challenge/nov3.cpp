#include<iostream>
#include<cstring>
using namespace std;
void check_palindrome ( char s [],int len) {
   int i,j;
   
   /*for (i=1,j=strlen(s); i<j ; ++i, --j) {
      cout<<s[i]<<" "<<s[j]<<endl;
	  if (s[i] != s[j])
	   return 0; // Not palindrome
   }
   return 1; //Palindrome
   */
   for(i=1;i<=len;i++)
   cout<<s[i];
   cout<<endl;
   for(j=len;j>=1;j--)
   cout<<s[j];
   cout<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p,i,j;
		
		cin>>n>>p;
		int d;
		char arr[p+1];
		if(p==1||p==2||n==1||n==2)    //More
		cout<<"impossible";
		else
		{
			if(p%2==0)
			{
				
				d=(p/2)-1;
				for( i=1;i<=d;i++)
				{
					arr[i]='a';
				}
				arr[i]='b';
				for(j=i+1;j<=p;j++)
				{
					arr[j]=arr[i];
					i--;
				}
				
			}
				else
				{
				  d=p/2;
				  for( i=1;i<=d;i++)
			     	{  
				     	arr[i]='a';
				   }  
				   arr[i]='b';
				   i--;
				   for(j=i+2;j<=p;j++)
			     	{  
				     	arr[j]='a';
				   }
				}
			int k=n/p;
			for(j=1;j<=k;j++)
			{
			 for(i=1;i<=p;i++)
			cout<<arr[i];	
			}	
				
			}
		//	check_palindrome(arr,p);
		  /*int k=check_palindrome(arr);
		  if(k==0)
		  cout<<"Not";
		  else 
		  cout<<"Yes";
		  */
			
			
			cout<<endl;
		}
		
		
	}

