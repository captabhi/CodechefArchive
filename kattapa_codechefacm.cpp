#include<cstdio>
using namespace std;
int main()
{

    int n,count1=0,count2=0,temp;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {

        scanf("%d",&temp);
        if(temp%2==0)
        {
            count1++;
        }
        else
            count2++;

    }
    if(count1>count2)
        printf("READY FOR BATTLE\n");
    else
        printf("NOT READY FOR BATTLE\n");

    return 0;
}
