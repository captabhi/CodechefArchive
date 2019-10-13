#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,med;
        cin>>n;
        int arr[n];
        int arr2[n];
        for(j=0;j<n;j++)
        {
           for( i=0;i<n;i++)
        {
            cin>>arr[i];


        }
        sort(arr,arr+n);
        med=(n)/2;
        arr2[j]=arr[med];

        }
        sort(arr2,arr2+n);
        cout<<arr2[med]<<endl;

    }


}
