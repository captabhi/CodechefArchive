#include<cstdio>
using namespace std;
int main()
{

    int t;
    long long int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if((n/2)+(n/3)+(n/4)>n)
            printf("%lld\n",(n/2)+(n/3)+(n/4));
        else printf("%lld\n",n);

    }
}
