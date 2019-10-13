#include<iostream>
using namespace std;
int main()
{

    int t,n,m,cnt=0,temp;
    cin>>t;
    while(t--)
    {
        int arr[100001]={0};
        cin>>n>>m;
        cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            arr[temp]+=1;

        }
        for(int i=0;i<m;i++)
        {
            cin>>temp;
            arr[temp]+=1;

        }

        for(int i=0;i<m;i++)
        {
            if (arr[i]>=2)
                cnt++;

        }
            cout<<cnt<<"\n";
            cout<<arr[100000];

    }


}
