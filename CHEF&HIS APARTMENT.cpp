#include<iostream>
using namespace std;
int main()
{

    int t,temp,flag=0,lcnt,cnt,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lcnt=0;
        cnt=0;
        flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>temp;

             if(temp==0&&flag==0)
            {

              flag=1;
              lcnt++;
              cnt++;

            }
            else if(flag==1)
            {
                if(temp==0)
                {
                    cnt++;

                }
                lcnt++;

            }



        }
        cout<<(lcnt*100)+(cnt*1000)<<"\n";

    }
}
