#include<iostream>
#include<algorithm>
using namespace std;
long long int lcm(int n1,int n2)
{

 long long int max1= (n1 > n2) ? n1 : n2;

    do
    {
        if (max1 % n1 == 0 && max1 % n2 == 0)
        {
            return max1;
            break;
        }
        else
            ++max1;
    } while (true);
}
int main()
{
    int t,n;
    long long templcm,minm;
    cin>>t;
    while(t--)
    {
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++)
        {

            cin>>arr[i];

        }
      sort(arr,arr+n);
      cout<<lcm(arr[0],arr[1])<<"\n";
       // minm=lcm(arr[0],arr[1]);

      /*  for(int i=0;i<n;i++)
        {

            for(int j=i+1;j<n;j++)
            {
                templcm=lcm(arr[i],arr[j]);
                if(templcm<=minm)
                {
                    minm=templcm;
                }
            }
        }
        cout<<minm<<"\n";
    }
    */
}
}
