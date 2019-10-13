#include<iostream>
using namespace std;
int main()
{

    int n,k,cnt=0;
    cin>>n>>k;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<=n;i++)
    {

        if(arr[i]<0&&arr[i+1]<0)
        {
            cout<<i<<" ";
            cnt++;
            arr[i]=arr[i]*(-1);
            arr[i+1]=arr[i+1]*(-1);


        }
        else if(arr[i]<0&&arr[i+1]>0)
        {
            int j=i+1;
            while(arr[j]>0&&j<=n)
            {
                cout<<j<<" ";
                j++;


            }
            if(j<=n&&arr[j]<0)
            {

                cnt=cnt+(j-i);

            }
            i=j+1;
           // if(j==n&&arr[j]>0)




        }


    }
    cout<<cnt;

}
