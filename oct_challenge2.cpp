#include<iostream>
#include<cstdio>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    float s,v;
    int t;
    float f;
    cin>>t;
    while(t--)
    {

        cin>>s>>v;
        f=(2*s)/(3*v);
        cout<<setprecision(7)<<fixed<<f<<endl;
    }

    return 0;
}
