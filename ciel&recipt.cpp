#include<cstdio.h>
#include<math>
using namespace std;
int main()
{

    int t,p;
    scanf("%d",&t);
    while(t--)
    {
        int count1=0;
        scanf("%d",&p);
        while(p>0)
        {


      for(int i=0;i<12;i++)
        {
           if(pow(2,i)<p)
           i++;

        }
           i--;
           p=p-pow(2,i);
           count1++;

        }
        printf("%d\n",&count1);
}
