#include<iostream>
using namespace std;
int main()
{

    string ch,arr[4];
    int t,i=0,j=0,cnt=0;
    cin>>t;
    while(t--)
    {
        cnt=0;
        i=0;
        while(i<4)
        {
            cin>>arr[i];
            i++;
        }
        i=0;
        while(i<4)
        {
            j=0;
            cin>>ch;
            while(j<4)
            {
                if(arr[j]==ch)
                {
                    cnt++;

                }
                j++;

            }
            i++;
        }
        if(cnt>=2)
            cout<<"similar\n";
        else
            cout<<"dissimilar\n";



    }
}
