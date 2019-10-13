#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
   /* int t;
    scanf("%d",&t);
    int arr[t];
    for(inti=0;i<n;i++)
    {

        scanf("%d",&arr[i])
    }
    sort(arr,arr+t);

    while(arr[i]==arr[i+1])
    {
        beg=i;
        j=beg+1;
        while(arr[beg]==arr[j])
            j++;



    } */

    int n,k=1,temp,flag,j;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&arr[0]);
    for(int i=1;i<n;i++)
    {

        scanf("%d",&temp);
         j=0;
        while(j<k)
        {
            if(arr[j]==temp)
            {

                flag=0;
                break;
            }
            else flag=1;
            j++;

        }
        if(flag==1)
        {

            scanf("%d",&arr[k]);
            k++;

        }

    }

    sort(arr,arr+k);
    for(j=0;j<=k;j++)
    {
        printf("%d\n",arr[j]);
    }

        return 0;



}
