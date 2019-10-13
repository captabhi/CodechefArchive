#include<bits/stdc++.h>
using namespace std;
void showstack(stack <int> gq) 
{ 
    stack <int> g = gq; 
    while (!g.empty()) 
    { 
        cout << '\t' << g.top(); 
        g.pop(); 
    } 
    cout << '\n'; 
} 
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	stack<int> st1;
	st1.push(0);
	int maxarea=0;
	showstack(st1);
	for(int i=1;i<n;i++)
	{
		showstack(st1);
		if(st1.empty())
		{
			cout<<"Empty pushing\n";
			st1.push(i);
			
		}
		else if(arr[i]>=arr[st1.top()])
		{
			cout<<" Not Empty pushing\n";
			st1.push(i);
		}
		else 
		{
			if(arr[i]<arr[st1.top()])
			{
				cout<<"less than\n";
			while((arr[i]<arr[st1.top()])&&(st1.empty()==false))
			{
				int val=st1.top();
				int area=(i-val)*arr[val];
				cout<<area<<"fdsf "<<i<<" "<<val<<endl;
				if(area>maxarea)
				{
					maxarea=area;
				}
				st1.pop();
			}
			st1.push(i);
			cout<<"Donn";
			}
		}
	cout<<"loop running\n";	
		
	}
	while((!st1.empty()))
			{
				int val=st1.top();
				int area=(n-val)*arr[val];
				if(area>maxarea)
				{
					maxarea=area;
				}
				st1.pop();
			}
	
	cout<<maxarea<<endl;
}
