#include<iostream>
using namespace std;
int main()
{
    int t,n,flag=1,cflag=1;
    string ch1,ch2;
    cin>>t;
    while(t--)
    {
        flag=1;
        ch1="def";
        ch2="def";
        cin>>n;
        cin>>ch1;
        if(n==1&&ch1=="cookie")
        flag=0;
        else
        {
        n--;
        while(n--)
        {

            cin>>ch2;
            if(ch1=="cookie"&&cflag==1)
            {
                if(ch2=="cookie")
                    flag=0;
                    cflag==0;
            }
            ch1=ch2;
        }
        }
        if(flag==0)
            cout<<"NO\n";
        else cout<<"YES\n";

    }

}
