#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int n,pl1,pl2,max1=0,min1=0,temp1,temp2,data;
    scanf("%d",&n);
    scanf("%d%d",&pl1,&pl2);
    data=pl1-pl2;
    if(data>0)
        max1=data;
    else
        min1=data;
    for(int i=1;i<n;i++)
    {
      scanf("%d%d",&temp1,&temp2);
      pl1=pl1+temp1;
      pl2=pl2+temp2;
      data=pl1-pl2;
      if(data>max1)
      {
          max1=data;
      }
      else if(data<min1)
      {
          min1=data;
      }

    }

     if(max1>abs(min1))
      {
          printf("%d %d",1,max1);
      }
      else
       {

       printf("%d %d",2,abs(min1));
       }
      return 0;
}
