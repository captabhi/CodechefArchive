#include<iostream>
#include<cstdio>
using namespace std;
int main()
{

     int var,arr[10001],N,t,time;
     arr[0]=0;
     cin>>t;
     while(t--)
     {   var=0;
         cin>>N;
         for(int i=1;i<=N;i++)
         {
             scanf("%d",&arr[i]);

         }

        /* for(int i=1;i<=N;i++)
         {
          //   scanf("%d",&arr[i]);
            // arr[i]=arr[i]-arr[i-1];
            cout<<arr[i]<<" ";

         }
         */


         for(int i=1;i<=N;i++)
         {
             scanf("%d",&time);
             if(time<=(arr[i]-arr[i-1]))
             var++;
         }

         cout<<var<<endl;

     }
     return 0;

}
