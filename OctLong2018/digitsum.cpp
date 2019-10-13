#include<bits/stdc++.h>
using namespace std;
struct A {
	long long int val;
	long int pos;
};
long long int n,d,steps;
A a,min1;

int dvisited[101]={0};
//bool visited[1000000000]={0};

 queue<A> q1;
long long int sumOfDigit(long long int n)
{
    long long int sum=0;
    while(n)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
    
}

void recurse2(long long int steps){

	while(steps<10000)
	{
		A val=q1.front();
		//cout<<val.val<<endl;
		q1.pop();
		if(val.val==1)
		{
			min1.val=val.val;
			min1.pos=val.pos;		
			return;
			//cout<<"Hola1\n";
			//cout<<"Setting minimum 1\n";
		}
		 if(val.val<101){
			if(dvisited[val.val]==0)
			{
				if(val.val<min1.val)
				{
					min1.val=val.val;
					min1.pos=val.pos;	
						
					//cout<<val.val<<" "<<val.pos<<"Setting minimum 2\n";
			//		cout<<"Hola3\n";
				}
				dvisited[val.val]++;
				A temp;
				temp.val=sumOfDigit(val.val);
				temp.pos=val.pos+1;
				q1.push(temp);
				temp.val=val.val+d;
				temp.pos=val.pos+1;
				q1.push(temp);
				steps++;
			//	cout<<"Hola2\n";
			}
			else {
				if(val.val<min1.val)
				{
					min1.val=val.val;
					min1.pos=val.pos;
					//cout<<val.val<<" "<<val.pos<<"Setting minimum 2\n";
			//		cout<<"Hola3\n";
				}
			}
			
		}
		else
		{
			//cout<<"Hola4\n";
			if(val.val<min1.val)
				{
					min1.val=val.val;
					min1.pos=val.pos;
					//cout<<val.val<<" "<<val.pos<<"Setting minimum 2\n";
			//		cout<<"Hola3\n";
				}
			A temp;
			temp.val=sumOfDigit(val.val);
			temp.pos=val.pos+1;
			q1.push(temp);
			temp.val=val.val+d;
			temp.pos=val.pos+1;
			q1.push(temp);
			steps++;
		}
		
	}
}

using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		
		while(!q1.empty())
		{
			q1.pop();
		}
		memset(dvisited,0,sizeof(dvisited));
		steps=0;
		min1.val=101;
		min1.pos=101;
		cin>>a.val>>d;
		a.pos=0;
		q1.push(a);
		recurse2(0);
		cout<<min1.val<<" "<<min1.pos<<endl;
	
	}

return 0;
}
