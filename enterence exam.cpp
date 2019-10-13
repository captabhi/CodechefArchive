#include<cstdio>
#include<iostream>
using namespace std;
int main()
{


     int t,n,k,e,m,sum=0,i,j,temp;

     scanf("%d",&t);
     while(t--)
     {
         scanf("%d",&n);
         scanf("%d",&k);
         scanf("%d",&e);
         scanf("%d",&m);
         long long int arr[n],ans;

        sum=0;

         for(i=1;i<n;i++)
         {
            arr[i]=0;
             for(j=1;j<=e;j++)
             {
                 scanf("%d",&temp);
                 arr[i]=temp+arr[i];
             }

         }

        /* for(i=1;i<n;i++)
         {
             for(j=1;j<=e+1;j++)
             {
                 cout<<arr[i][j]<<"  ";

             }

             cout<<endl;

         }
         */

        sum=0;
        for(j=1;j<e;j++)
        {
            scanf("%d",&temp);
            sum=sum+temp;
        }

        /* for(j=1;j<e;j++)
        {
            cout<<arr2[e]<<"  ";

        }
        cout<<arr2[e+1]<<endl;
        */


         // bubble sorting upto ktimes;

         for(i=1;i<n;i++)
         {

             for(j=1;j<n-i-1;j++)
             {
                 if(arr[j]>arr[j+1])
                 {

                     temp=arr[j+1];
                     arr[j+1]=arr[j];
                     arr[j]=temp;


                 }
                }
             if(i==k)
             break;
         }

         ans=(arr[n-i]-sum)+1;
         if(ans<0)
        {

         printf("%d",0);
         printf("\n");

        }
         if(ans>0&&ans<=m)
          {

            printf("%lld",ans);
            printf("\n");
          }
         else
            if(ans>m)
            printf("impossible\n");



     }
     return 0;
}
