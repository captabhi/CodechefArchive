#include<iostream>
using namespace std;
int main()
{
 int t;

 long long int N,B,M,sum,P;
 cin>>t;

 while(t--)
 {
 cin>>N>>B>>M;
  sum=0;

  while(N)
  {
    if(N/2==0&&N>1)
    {
        P=N/2;
     sum=sum+(P*M)+B;
     M=M*2;
     N=N-(N/2);

    }
   else
   {
       P=(N+1)/2;
    sum=sum+(P*M)+B;
     M=M*2;
     N=N-((N+1)/2);
    }
  }
  cout<<sum-1;

 }
 return 0;
}

