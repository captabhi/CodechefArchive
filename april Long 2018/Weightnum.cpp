#include<iostream>
#include<cmath>
#define N 1000000007
using namespace std;
  long long int  exponentiation( long long int base,  long long int exp)
    {
          long long int t = 1;
        while (exp > 0) {
 
            
            if (exp % 2 != 0)
                t = ((t%N) * (base%N)) % N;
 
            base = ((base%N) * (base%N)) % N;
            exp /= 2;
            
        }
        return t % N;
    }
int main()
{
		long long int t;
		cin>>t;
		while(t--)
		{
			 long long int n,ans;
			cin>>n; 
			int w;
			cin>>w;
			if(w>8||w<-9)
			{
				cout<<0<<endl;
				continue;
			}
			if(w<0)
			{
				w*=(-1);
				w=(10-w);
			}
			else
			{
				w=(9-w);
			}
			
				ans=((exponentiation(10,n-2)%N)*(w%N));
				ans=ans%N;
				
			
		
			cout<<ans<<endl;
			
		}
}
