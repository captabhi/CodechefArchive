#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  unsigned int A,B,i,arr[10],quet,j=0,flag=0;
  cin>>A>>B;
  quet=A-B;
  i=0;
  while(quet!=0)
  {
   arr[i]=quet%10;
   i++;

   quet=quet/10;
   }
   while(j<i)
   {
       if(arr[j]==9)
        j++;
       else
       {
        arr[j]+=1;
        flag=1;
        break;
       }
   }
   if(flag==0)
   {
       arr[0]-=1;
   }
   int sum=0;
   for(int j=0;j<i;j++)
   {
    sum=sum+arr[j]*pow(10,i-j-1);
    }

    cout<<sum;
  return 0;

 }
