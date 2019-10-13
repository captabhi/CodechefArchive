#include<bits/stdc++.h>
int primeno[100000],cnt=0;
using namespace std;
struct Gear{
	int speed;
	bool dir;
	bool isconnected;
	int teeth;
	
};
void path()
{
	int st
}
void primeFun(int n)
{   n=1000000;
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    
 
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p])
       {
       	primeno[cnt]=p;
       	cnt++;
	   }
	   
}

void divide(int *n,int *d)
{
	if(*n>*d)
	{
		if(*n%(*d)==0)
		{
			*n=*n/(*d);
			*d=1;
		}
		else
		{
			for(int i=2;i<sqrt(*d);i++)
			{
				if((*d)%i==0&&(*n)%i==0)
				{
					*d=(*d)%i;
					*n=(*n)%i;
				}
			}
			
		}
	}
	else
	{
		if(*d%(*n)==0)
		{
			*d=*d/(*n);
			*n=1;
		}
		else
		{
			for(int i=2;i<sqrt(*n);i++)
			{
				if((*n)%i==0&&(*d)%i==0)
				{
					*n=(*n)%i;
					*d=(*d)%i;
				}
			}
			
		}
	}
}

int main()
{
	int n,m;
	cin>>n>>m;
	 bool matrix[n][n];
	 memset(matrix,0,sizeof(matrix));
	Gear gear[n];
	for(int i=0;i<n;i++)
	{
		cin>>gear[i].teeth;
	}
	while(m--)
	{
		int t;
		cin>>t;
		if(t==1)
		{
			int x,c;
			cin>>x>>c;
			gear[x-1].teeth=c;
			//make sure to calculate the connected speed variable
			
		}
		else if(t==2)
		{
			int x,y;
			cin>>x>>y;
			matrix[x-1][y-1]=1;
		}
		else
		{
			int x,y,v;
			cin>>x>>y>>v;
			if(matrix[x-1][y-1]==1)
			{
				if(iscycle(x-1,y-1)!=0)
				{
					
				}
			}
			
		}
	}
}
