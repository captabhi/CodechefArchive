#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,k,count1;


    cin>>n;
    cin>>m;

    int arr1[n];
    char arr2[n];
    for(i=0;i<n;i++)
        arr2[i]='#';


    for(i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    i=0;
    while(i<n)
    {
        cin>>temp;
        arr2[temp]='*';
        i++
    }
    count1=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

            if(arr1[j]==1)&&arr2[j]=='#')
            {
                flag=0;
                break;

            }
            else
                flag=1;
        }
        if(flag==1)
            count1++;
         temp=arr[n-1];
        for(k=n-2;k>0;k++)
        {

            arr[k+1]=arr[k];
        }
        arr[0]=temp;

    }

    cout<<"ANSWER:"<<count1<<endl;


    return 0;
}
