
#include<cstdio>
using namespace std;
int main()
{

    int t,n,k,temp,i,j,flag=0,ln;
    long int sum=0;

    scanf("%d",&t);
    while(t--)
    {

        scanf("%d %d",&n,&k);


         //int arr[n+1][k+1]={0};
         int arr2[k+1]={0};

        sum=0;
        flag=0;
        for( i=1;i<=n;i++)
        {
           scanf("%d",&ln);
           sum=0;
           for( j=1;j<=ln;j++)
           {
                scanf("%d",&temp);
              //  arr[i][temp]=temp;
                arr2[temp]=temp;

           }
           for(j=1;j<=k&&flag==0;j++)
           {
               sum+=arr2[j];

           }
           if(sum==(k*(k+1)/2)&&i!=n&&flag==0)
            flag=1;
           else if(sum==(k*(k+1)/2)&&i==n&&flag==0)
            flag=2;
           else if(sum!=(k*(k+1)/2)&&i==n&&flag==0)
            flag=3;

        }

        if(flag==1)
            printf("some\n");
         else if(flag==2)
            printf("all\n");
           else if(flag==3)
            printf("sad\n");



        /*for( i=1;i<=n;i++)
        {
           sum=0;
           for( j=1;j<=k;j++)
           {
                cout<<arr[i][j]<<" ";
                sum+=arr[i][j];

           }
           cout<<sum<<endl;
           if(i==n&&sum==(k*(k+1)/2))
            cout<<"all\n";
           else if(sum==k*(k+1)/2&&i!=n)
                   {

                       cout<<"some\n";
                       break;
                   }

        }
*/

    }

}
