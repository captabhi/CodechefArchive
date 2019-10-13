#include<iostream>
using namespace std;
int main()
{
 int i,j,var,count=0;
int ch=0;
cin>>i;
cin>>j;
while(ch<i)
{ cin>>var;
if(var%j==0)
count++;
ch++;

}
cout<<count;
return 0;
 }
