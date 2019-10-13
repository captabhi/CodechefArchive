/* you're welcome
   © Abhishek Mishra
*/
#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++
typedef long long int lli;
typedef long double llf;
#define MAX 1000
using namespace std;
class Stack 
{ 
     
public:
	int top; 
    int a[MAX];    //Maximum size of Stack 
  
    Stack()  { top = -1; } 
    bool push(int x); 
    int pop(); 
    bool isEmpty(); 
}; 
  
bool Stack::push(int x) 
{ 
    if (top >= (MAX-1)) 
    { 
        //cout << "Stack Overflow"; 
        return false; 
    } 
    else
    { 
        a[++top] = x; 
        //cout<<x <<" pushed into stack\n"; 
        return true; 
    } 
} 
  
int Stack::pop() 
{ 
    if (top < 0) 
    { 
        //cout << "Stack Underflow"; 
        return 0; 
    } 
    else
    { 
        int x = a[top--]; 
        return x; 
    } 
} 
  
bool Stack::isEmpty() 
{ 
    return (top < 0); 
} 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		Stack str[n],str2[n];
		int dee=0,dum=1;
		int turn;
		if(s=="Dee")
		turn=0;
		else
		turn=1;
		for(int i=0;i<n;i++)
		{
			string var;
			cin>>var;
			for(int j=0;j<var.length();j++)
			{
			str[i].push(var[j]-'0');
			str2[i].push(var[j]-'0');	
			}
		}
		
		/*for(int i=0;i<n;i++)
		{
			while(str[i].isEmpty()!=1)
			{
				cout<<str[i].pop();
			}
			cout<<endl;
		}*/
		int winner;
		//cout<<turn<<endl;
		while(1)
		{
			int flag=0;
			//cout<<"Running again\n";
			if(turn==0)
			{
				for(int i=0;i<n;i++)
				{
					if(str[i].isEmpty()!=1)
					{
						if(str[i].a[str[i].top]==0)
						{
						flag=1;
						int xyz=str[i].pop();
						//cout<<"Turn 1="<<turn<<" "<<i<<" "<<xyz<<endl;
								
						while(str[i].a[str[i].top]!=1&&str[i].isEmpty()!=1)
						{
							//cout<<"poping 1"<<str[i].pop()<<endl;
							str[i].pop();
						}
						break;
						}	
					}
					
				}
				if(flag==0)
				{
					winner=0;
					break;
				}
				turn =1;
				//cout<<"turned changed\n";
			}
			else
			{
				for(int i=0;i<n;i++)
				{
					if(str[i].isEmpty()!=1)
					{
						
					
					if(str[i].a[str[i].top]==1)
					{
						flag=1;

						int xyz=str[i].pop();
						//cout<<"Turn 2="<<turn<<" "<<i<<" "<<xyz<<endl;		
						while(str[i].a[str[i].top]!=0&&str[i].isEmpty()!=1)
						{
							//str[i].pop();
							//cout<<"poping 2"<<str[i].pop()<<endl;
							str[i].pop();
						
						}
						break;
					}
					}
				}
				if(flag==0)
				{
					winner=1;
					break;
				}
				
				turn = 0;
			//	cout<<"turned changed\n";
				
			}		
		}
		
	if(winner==1)
	{
		cout<<"Dum\n";
	}
	else
	cout<<"Dee\n";
	}


}

