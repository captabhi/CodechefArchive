#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,k,temp1,count1,flag;
    char temp;


    cin>>n;
    cin>>m;


    int arr1[n];
    char arr2[n];
    for(i=0;i<n;i++)
      {

      arr2[i]='#';
      }

    for(i=0;i<n;i++)
    {

        cin>>arr1[i];
    }
    //cout<<"done:"<<endl;
    i=0;
    while(i<m)
    {
        cin>>temp1;
        arr2[temp1]='*';
        i++;
    //    cout<<"stuck here:"<<endl;
    }
  //  cout<<"done:"<<endl;


/*    for(i=0;i<n;i++)
    {

        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {

        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    temp=arr2[n-1];
        for(k=n-2;k>=0;k--)
        {

            arr2[k+1]=arr2[k];
        }
        arr2[0]=temp;

     for(i=0;i<n;i++)
    {

        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    temp=arr2[n-1];
        for(k=n-2;k>0;k--)
        {

            arr2[k+1]=arr2[k];
        }
        arr2[0]=temp;

        for(i=0;i<n;i++)
    {

        cout<<arr2[i]<<" ";
    }
    cout<<endl;

*/

    count1=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

            if(arr1[j]==1&&(arr2[j]=='#'))
            {
                flag=0;
                break;

            }
            else
                flag=1;
        }
        if(flag==1)
            count1++;
         temp=arr2[n-1];
        for(k=n-2;k>0;k--)
        {

            arr2[k+1]=arr2[k];
        }
        arr2[0]=temp;

    }

    cout<<count1<<endl;


    return 0;
}
