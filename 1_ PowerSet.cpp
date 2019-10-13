#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t,n,m,i,sum=0,flag=0;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d%d",&n,&m);
    flag=0;
     int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    for(i=0;i<pow(2,n);i++)
    {
        sum=0;
        for(int j=0;j<n;j++)
        {

            if(i&(1<<j))
              {
                 sum+=arr[j];
              }
        }
        if(sum==m)
        {
          printf("Yes\n");
          flag=1;
          break;
        }

    }
    if(flag==0)
        printf("No\n");
    }
}
