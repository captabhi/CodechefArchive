#include<iostream>
using namespace std;
int main()
{
 int ch,no,i=0,digit,rem;
 cin>>ch;
 while(i<ch)
 {
  cin>>no;
  digit=0;
  rem=0;
  while(no)
  {
    rem=rem+(no%10);
    no=no/10;
    digit++;

   }

   if((digit-rem)==1||(digit-rem)==digit-1)
   cout<<"Yes\n";
   else
   cout<<"No\n";
   i++;
   }
   return 0;
 }
