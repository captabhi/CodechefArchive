#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,n,q,i,g;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&g);
        while(g--)
        {
            scanf("%d",&i);
            scanf("%d",&n);
            scanf("%d",&q);


            if(i==1)
            {
                if(n%2==0)
                    printf("%d\n",n/2);
                else
                {
                    if(q==1)
                    {
                        printf("%d\n",(n-(n+1)/2));
                    }
                    else
                        printf("%d\n",(n+1)/2);

                }

            }
            else
            {

                if(n%2==0)
                {
                    printf("%d\n",n/2);
                }
                else
                {
                    if(q==2)
                    {
                        printf("%d\n",(n-(n+1)/2));

                    }
                    else
                        printf("%d\n",(n+1)/2);

                }
            }

        }

    }

}
