#include<iostream>
using namespace std;
int main()
{

    int t,a,b;
    cin>>t;
    while(t--)
    {

        cin>>a>>b;
        if(a-b==2||b-a==2)
            cout<<"YES\n";
        else if(a%2==0)
        {
            if(b==a-1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
        {
            if(b==a+1)
                cout<<"YES\n";
                else
                    cout<<"NO\n";
        }
    }
}
