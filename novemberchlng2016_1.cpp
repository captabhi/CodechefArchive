#include<cstdio>
#include<iostream>
using namespace std;
int main()
{

    int t,n,i,j,temp1,temp2;
    long long int minlcm;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);

        }
   /*     for(i=0;i<n;i++)
        {
            printf("%d  ",arr[i]);

        }
        cout<<endl;
*/

        temp1=arr[0];
        temp2=arr[1];
        while(temp1!=temp2)
                {

                    if(temp1<temp2)
                    {

                        temp1=temp1+arr[0];
                    }
                    else{
                        temp2=temp2+arr[1];
                    }
                }
                minlcm=temp1;
 //  cout<<"done here\n";

        for(i=0;i<n;i++)
        {
            if(arr[i]>minlcm)
            continue;
            for(j=i+1;j<n;j++)
            {
                temp1=arr[i];
                  temp2=arr[j];
                while(temp1!=temp2)
                {

                    if(temp1<temp2)
                    {

                        temp1=temp1+arr[i];
                    }
                    else{
                        temp2=temp2+arr[j];
                    }
                }
             /*   cout<<"LCM is :"<<temp1<<endl;
                cout<<"MINLCM IS :"<<minlcm<<endl;*/

                if(temp1<minlcm)
                    minlcm=temp1;

                }
        }
        printf("%lld\n",minlcm);



    }
    return 0;
}
