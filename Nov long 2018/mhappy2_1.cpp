#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
void showq(queue <int> gq)
{
    queue <int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}
int main()
{
    int n,q,k;
    cin>>n>>q>>k;
    int v1[n];
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    queue<int> q1;
    int max1=0,max2=0,maxf=0,maxr=0;
    q1.push(v1[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        if(v1[i]==1&&q1.back()>=1)
        {
            q1.back()++;
            //cout<<"happening\n";
        }
        else{
            q1.push(v1[i]);
        }
        if(q1.back()>max1)
        {
        max2=max1;
        max1=q1.back();
        }
        else if(q1.back()>max2)
            max2=q1.back();

    }
    //cout<<max1<<" "<<max2<<endl;
    char ch;
    int truemax;
    while(q--)
    {
        cin>>ch;
        if(ch=='!')
        {

            if(q1.front()==max1)
            {
                max1--;
                if(q1.front()>1)
               {
                q1.front()--;
                if(q1.back()>0)
                q1.back()++;
                else
                {
                q1.push(1);
                }
               }
               else{
                int temp=q1.front();
                q1.pop();
                if(q1.back()==0)
                q1.push(temp);
                else
                q1.back()++;

               }

            }
            else
            {
                if(q1.front()>1)
               {
              // cout<<"running\n";
                q1.front()--;
                if(q1.back()>0)
                q1.back()++;
                else
                {
                q1.push(1);
                }
               }
               else if(q1.front()==0){
                int temp=q1.front();
                q1.pop();
                q1.push(temp);
            }
            else{
                int temp=q1.front();
                q1.pop();
                if(q1.back()>=1)
                q1.back()++;
                else
                q1.push(temp);
            }
        }
        if(max2>max1)
        {
            //cout<<max1<<" "<<max2<<endl;
            int temp=max1;
            max1=max2;
            max2=temp;
          //  cout<<"changed\n";
        }
        if(q1.front()>max1)
        {
        max2=max1;
        max1=q1.front();
        //cout<<"$$\n";
        }/*else if(q1.front()>max2)
        {
        max2=q1.front();
        cout<<"$$$\n";
        }
        */
        if(q1.back()>max1)
        {
        max2=max1;
        max1=q1.back();
      //  cout<<"@@\n";
        }
        /*else if(q1.back()>max2)
        {
        max2=q1.back();
        cout<<"@@@\n";
        }
		*/

    }
    else
    {
        if(max1>=k)
        cout<<k<<endl;
        else
        cout<<max1<<endl;
    }
    //cout<<max1<<" "<<max2<<endl;
    //showq(q1);

}
}

