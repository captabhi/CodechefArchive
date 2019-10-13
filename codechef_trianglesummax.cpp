#include<cstdio>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
     scanf("%d",&n);
     int arr[n][n];
     for(int i=0;i<n;i++)
     {

         for(int j=0;j<=i;j++)
         {

             scanf("%d",&arr[i][j]);
         }
     }
     /*for(int i=0;i<n;i++)
     {

         for(int j=0;j<=i;i++)
         {

             printf("%d",arr[i][j]);
         }
     }
     */

     for(int i=n-1;i>0;i--)
     {

         for(int j=0;j<=i;j++)
         {

             if(arr[i][j]+arr[i-1][j]>arr[i-1][j]+arr[i][j+1])
             {

                 arr[i-1][j]=arr[i][j]+arr[i-1][j];

             }
             else{
                 arr[i-1][j]=arr[i-1][j]+arr[i][j+1];
             }
         }
     }

     printf("\n%d",arr[0][0]);


  }
return 0;
}
