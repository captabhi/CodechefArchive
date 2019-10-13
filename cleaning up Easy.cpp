#include<iostream>
using namespace std;
int main()
{

    int t,n,m,temp,i=0,flag=0;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n>>m;
        int arr[n+1]={0};
        for(i=0;i<m;i++)
        {
            cin>>temp;
            arr[temp]=temp;
        }
        for(i=1;i<=n;i++)
        {

           //cout<<arr[i]<<" ";
            if(arr[i]==0&&flag==0)
            {
              cout<<i<<" ";
              flag=1;
              arr[i]=-1;
            }
            else if(arr[i]==0&&flag==1)
            {
                flag=0;
                continue;
            }



        }
        cout<<"\n";
        for(i=1;i<=n;i++)
        {
            //cout<<arr[i]<<" ";
            if(arr[i]==0)
            cout<<i<<" ";

        }
        cout<<endl;
    }

}
