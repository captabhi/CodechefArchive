#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int t=1;
    cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
		int A[n];
		long long int count = 0;
		unordered_map<int, vector<int>> map_table;
		for (int i = 0; i < n; ++i)
		    cin >> A[i];
		map_table[A[0]].push_back(0);
		for (int i = 1; i < n; ++i)
		{
		    A[i] = A[i] ^ A[i-1];
		    if (!A[i])
		        count += i;
		    map_table[A[i]].push_back(i);
		}
		unordered_map<int, vector<int>>::iterator i2; 
		for (i2 = map_table.begin(); i2 != map_table.end(); ++i2)
		{
		    int size = i2->second.size();
		    if (size >= 2)
		    {
		        for (int i = 0; i < size-1; ++i)
		        {
		            for (int k = i+1; k < size; ++k)
		                count += ((i2->second[k])-(i2->second[i])-1);
		        }
		    }
		}
		
		cout<<count<<endl;



	}


}


