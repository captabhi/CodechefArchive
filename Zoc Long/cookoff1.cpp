#include<iostream>
using namespace std;
int main()
{
	int t;
	int al,bl,j,k,i,l;
	string a,b;
	 int arr[20]={0};
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		al=a.length();
		bl=b.length();
		j=al-1;
		k=bl-1;
		for(i=0;j!=-1&&k!=-1;i++)
		{
			int c= (a[j]-'0')+(b[k]-'0');
			arr[i]=c%10;
			
			
			j--;
			k--;
		}
		
		if(j==-1)
		{
			for(l=k;l>=0;l--)
			{
				arr[i]=(b[l]-'0');
				i++;
			}
		}
		else if(k==-1)
		{
			for(l=j;l>=0;l--)
			{
				arr[i]=(a[l]-'0');
				i++;
			}
		}
   
 /*  if(al==bl)
	{
	    
		int y=((a[0]-'0')+(b[0]-'0'));
		if(y>9)
		cout<<y/10;
}  */ 
	for(l=i-1;l>=0;l--)
	cout<<arr[l];
	cout<<endl;	
		
	}
}
