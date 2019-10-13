#include<iostream>
using namespace std;
int main()
{
	
	for(int i=1;i<100;i++)
	{
		if(i%2==0)
		continue;
		for(int j=1;j<100;j++)
		{
			if(j%2==0)
			continue;
			int var=i^j;
			if(var<=2)
			cout<<i<<" "<<j<<endl;
		}
	}
	
	for(int i=1;i<100;i++)
	{
		if(i%2!=0)
		continue;
		for(int j=1;j<100;j++)
		{
			if(j%2!=0)
			continue;
			int var=i^j;
			if(var<=2)
			cout<<i<<" "<<j<<endl;
		}
	}
}
