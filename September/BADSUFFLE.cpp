#include<bits/stdc++.h>
using namespace std;
unsigned long long int cnt=0;
unordered_map<string,int> umap;

string swap(string s,int pos1,int pos2)
{
	char temp=s[pos1];
	s[pos1]=s[pos2];
	s[pos2]=temp;
	
	return s;
}

void print(string s,int idx,int n)
{
	if(idx==n)
	{
		return; 
	}
	for(int i=0;i<n;i++)
	{
		string temp=swap(s,idx,i);
		if(idx==n-1)
		{
			//cout<<temp<<endl;
			umap[temp]++;
			cnt++;
				
		}
		//cout<<temp<<endl;
		print(temp,idx+1,n);
	}
	
}
int main()
{
	
	string s;
	
	cin>>s;
	print(s,0,s.length());
	unordered_map<string, int>:: iterator itr;
	string maxs,mins;
    cout << "\nAll Elements : \n"; 
    int max=0;
    int min=10000000;
    for (itr = umap.begin(); itr != umap.end(); itr++) 
    { 
        if(itr->second>max)
        {
        	maxs=itr->first;
        	max=itr->second;
		}
		if(itr->second<min)
		{
			mins=itr->first;
			min=itr->second;
		}
        cout << itr->first << "  " << itr->second << endl; 
     }
     
	cout<<"MAX "<<maxs<<" "<<max<<endl;
	cout<<"MIN "<<mins<<" "<<min<<endl;
	cout<<cnt<<endl;
	
	
}
