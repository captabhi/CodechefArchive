#include<iostream>
using namespace std;
int main()
{
 int t,N,M,B;
 cin>>t;

 while(t--)
 {
 cin>>N>>M>>B;
  sum=0;

  do
  {
    if(n/2==0)
    {
     sum=sum+((N/2)*M))+1}
     M=M*2;
     N=N-(N/2);

    }
   else
   {
    sum=sum+(((N+1)/2)*M))+1}
     M=M*2;
     N=N-((N+1)/2));
    }
  }while(N!=1)
  cout<<sum;
  return 0;
 }

