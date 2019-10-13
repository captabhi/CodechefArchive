#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    unsigned long long int time=0;
    unsigned long long t,n,b,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>b>>m;
        time=0;
        while(n>0)
        {
            if(n%2==0)
           {

            time=time+m*n/2;
            n=n-n/2;
           }
            else
           {
               time=time+m*(n+1)/2;
                n=n-(n+1)/2;
           }
            m=m*2;
            time+=b;

        }
        //time+=m;
        cout<<time-b<<"\n";


    }
}
