#include<iostream>
#include<algorithm>
using namespace std;
 int time(int arr[], int n)
    {
        if (n < 3)
        {
            return arr[n - 1];
        }
        else if (n == 3)
        {
            return arr[0] + arr[1] + arr[2];
        }
        else
        {
            int temp1=arr[n - 1]+arr[0]+arr[n - 2]+arr[0];
            int temp2=arr[1]+arr[0]+arr[n - 1]+arr[1];

            if (temp1<temp2)
            {
                return temp1+time(arr, n - 2);
            }
            else if (temp2<temp1)
            {
                return temp2+time(arr, n - 2);
            }

        }
    }
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {

        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        sort(arr,arr+n);
        int time1=time(arr,n);
        cout<<time1<<endl;

    }
}
