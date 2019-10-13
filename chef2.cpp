#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
unsigned short int amt;
 float amtb;
cin>>amt;cout<<"";cin>>amtb;
if((amt%5)==0&&(amtb-(amt+.50)>=0))
cout<<"\n"<<setprecision(2)<<fixed<<(amtb-(amt+.50));
else
    cout<<setprecision(2)<<fixed<<amtb;

return 0;
}
