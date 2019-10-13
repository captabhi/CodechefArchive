#include<iostream>
using namespace std;
int main()
{
    int t,n,sum1a=0,sum2a=0,sum1b=0,sum2b=0;
    cin>>t;
    while(t--)
    {

        cin>>n;
        int arr1[n],arr2[n];
        for(int i=0;i<n;i++)
            cin>>arr1[i];
        for(int i=0;i<n;i++)
            cin>>arr2[i];
        for(int i=0;i<n;i=i+2)
        {
            sum1a+=arr1[i];
            sum2b+=arr2[i];

        }

         for(int i=1;i<n;i=i+2)
        {
            sum1b+=arr1[i];
            sum2a+=arr2[i];

        }
        if(sum1a+sum2a<sum1b+sum2b)
          cout<<sum1a+sum2a<<"\n";
        else
            cout<<sum1b+sum2b<<"\n";
        sum1a=0,sum2a=0,sum1b=0,sum2b=0;

    }
}
