#include<iostream>
using namespace std;
int main()
{

     char arr[101];
     int t,flag;
     cin>>t;
     while(t--)
     {

         cin>>arr;
         if(arr[0]==arr[1])
         {
             cout<<"NO1"<<endl;
             break;
         }
         else {

            for(int i=2;arr[i]!='\0';i=i+2)
            {
                if(arr[0]==arr[i]&&arr[1]==arr[i+1])
                   {

                   flag==1;
                   cout<<"I:"<<i<<endl;
                   cout<<"flag:"<<flag<<endl;
                   }
                else {flag=0;
                   cout<<"else running for I:"<<i<<endl;
                   break;}


           }
           cout<<":i am gere"<<endl;
         if(flag==1)
            cout<<"YES2"<<endl;
         else cout<<"NO2"<<endl;

           }
     }
     return 0;
}
