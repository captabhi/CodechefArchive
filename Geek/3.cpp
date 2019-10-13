#include <iostream>
#include <math.h>
#define m 1000000007
using namespace std;
int main(int argc, const char * argv[])
{
int t;
cin>>t;
unsigned long long a[100001];
a[1] = 2;
a[2] = 2;
a[3] = 6;
a[4] = 12;
unsigned long long val = 16;
for(int i=5;i<1100;i++)
{
unsigned long long temp = 0;
   for(int j=1;j<i;j++){

            if(i%j==0)
                temp=temp+a[j];
            a[i] = val + val - temp;
           }

        val = 2*val;
}
  while(t)
   {
        int l,r;
        cin>>l>>r;
        unsigned long long sum=0;
        for(int i=l;i<=r;i++)
            {
        sum = (sum%m + a[i]%m)%m;

        }
        cout<<(sum%m);
        if(--t)
         cout<<endl;
}
return 0;
}
