#include<limits>
#include<iostream>
#define INF INT_MAX
#include<cstring>
using namespace std;
int main()
{
    int t,n,k,m,s,i,j;

    long int x,c;
    cin>>t;
    while(t--)
    {

        cin>>n>>k>>x>>m>>s;
        long long int arr[n+1][n+1]={1};
        //memset(arr, INF, sizeof(arr[0][0]) * (n+1) * (n+1));
        for( i=1;i<=n;i++)
        {
            for( j=1;j<=n;j++)
            {
                arr[i][j]=INF;
            }
        }
        for( i=1;i<=k;i++)
        {
            for( j=1;j<=k;j++)
            {
                if(i==j)
                    arr[i][j]=0;
                else
                arr[i][j]=x;
            }
        }


        while(m--)
        {
            cin>>i>>j>>x;
            arr[i][j]=x;
        }

         for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(arr[i][k]!=INF&&arr[k][j]!=INF&&arr[i][k]+arr[k][j]<arr[i][j])
                    arr[i][j]=arr[i][k]+arr[k][j];
            }
        }
    }


            for( j=1;j<=n;j++)
            {
                cout<<arr[s][j]<<" ";
            }
            cout<<"\n";



    }

}
