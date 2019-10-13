#include<cstdio>
#include<iostream>
using namespace std;
int main()
{

    int t,n,sum,i;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        char s[1001];
        scanf("%s",s);
       for(i=0;s[i]!='\0';i++)
        {
         if(s[i]>='0'&&s[i]<='9')
         sum+=(int)s[i]-48;
        }
       printf("%d\n",sum);
    }
    return 0;
}
