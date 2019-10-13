#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr1[n],arr2[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i]>>arr2[i];
	}
	int scr1=0,scr2=0;
	int winner;
	int maxscr=0;
	for(int i=0;i<n;i++)
	{
		
		scr1=scr1+arr1[i];
		scr2=scr2+arr2[i];
		
		if(scr1>scr2)
		{
			int temp=scr1-scr2;

			
				if(temp>maxscr)
				{
					maxscr=temp;
					winner=1;
				}
					
		}
		else
		{
			int temp=scr2-scr1;
			if(temp>maxscr)
			{
				winner=2;
				maxscr=temp;
			}
		}
			
	}
	
	if(winner==1)
	{
		cout<<"1 "<<maxscr;
	}
	else
	cout<<"2 "<<maxscr;
	
}
