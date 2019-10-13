#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

int NOD(int num)
{
    int nod=0;
int sqrt1=(int)sqrt(num);

    for(int i=1;i<sqrt1;i++)
    {

        if(num%i==0)
            nod=nod+2;


    }
    if(sqrt1*sqrt1==num)
    {

        nod--;

    }
    return nod;

}

int main()
{

int number=0;
int i=1;
while(NOD(number)<500)
{
    number+=i;
    i++;

}
cout<<number;

}
