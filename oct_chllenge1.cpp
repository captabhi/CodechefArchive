#include<cstdio>
#include<iostream>
using namespace std;
int main()
{

    int i ,j,mH,mB,c,t,count1=0;
    int arr[100000];   // exact value yet to calculated.

     scanf("%d",&t);

    while(t--)
    {
         count1=0;
         scanf("%d",&mH);
         scanf("%d",&mB);
         scanf("%d",&c);
         j=0;
         for(i=2;i<=c/2;i++)
         {
             if(c%i==0)
             {
                 arr[j]=i;
                 j++;

             }

         }

         int arrLmt=j;
         /*for(j=0;j<arrLmt;j++)
         {

             cout<<arr[j]<<endl;
         } */

         for(i=0;i<arrLmt&&arr[i]<=mH;i++)
         {

             for(j=0;j<arrLmt&&arr[j]<=mB;j++)
             {

                 if(arr[i]*arr[j]==c)
                 {

                   //cout<<":I"<<i<<" J:"<<j<<endl;

                   count1++;

                 }
             }
         }
         if(c<=mH)
            count1++;
         if(c<=mB)
            count1++;

         cout<<count1<<endl;


    }

    return 0;

}




