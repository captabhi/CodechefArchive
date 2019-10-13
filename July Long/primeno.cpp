/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include<bits/stdc++.h>
#define no 1000000
using namespace std;
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
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
    int count=0;
    for (int p=2; p<=n; p++)
       if (prime[p])
       {
       	//cout<<p<<" ";
		  count++; 	
	   }
	   cout<<count;
}

using namespace std;

int main()
{
	int n = 1000000;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    SieveOfEratosthenes(n);
    return 0;

    return 0;
}

