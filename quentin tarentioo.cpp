#include<iostream>
using namespace std;
int main()
{

    int n,t,sum,temp,flag=0,pretemp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        flag=0;
        sum=0;
        cin>>temp;
        sum+=temp;
        for(int i=1;i<n;i++)
        {

            pretemp=temp;
            cin>>temp;
            if(((temp-pretemp)>1||(temp-pretemp)<-1)&&flag==0)
            {
                flag=1;
            }
            sum+=temp;

        }
        if(sum==n*(n+1)/2&&flag==1)
            cout<<"yes\n";
        else cout<<"no\n";
    }
}
