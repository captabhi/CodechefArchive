#include<bits/stdc++.h>
using namespace std;

	unsigned long long  xorPairCount(unsigned long long  arr[], unsigned long long  n, unsigned long long x)
	{
	    unsigned long long result = 0; 
	 
	    	    unordered_map <unsigned long long int,unsigned long long  int> m;
	 
	    for (int i=0; i<n ; i++)
	    {
	        unsigned long long int curr_xor =  x^arr[i];
	 
	        
	        if (m.find(curr_xor) != m.end())
	            result += m[curr_xor];
	 
	        
	        m[arr[i]]++;
	    }
	 
	 
	    
	    return result;
	}
int main()
{
	unsigned long long int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n;
		cin>>n;
		unsigned long long int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		unsigned long long  int arrodd[n];
		unsigned long long int arreven[n];
		unsigned long long int ieven=0,iodd=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]%2==0)
			{
				arreven[ieven]=arr[i];
				ieven++;	
			}
			
			else
			{
				arrodd[iodd]=arr[i];
				iodd++;	
			}
			
		}
		sort(arrodd,arrodd+iodd);
		sort(arreven,arreven+ieven);
		/*
		for(int i=0;i<iodd;i++)
		cout<<arrodd[i]<<" ";
		cout<<endl;
		for(int i=0;i<ieven;i++)
		cout<<arreven[i]<<" ";
		cout<<endl;
		*/
		unsigned long long int countodd=(iodd-1)*iodd/2;
		unsigned long long int counteven=(ieven-1)*ieven/2;
		
		/*for(int i=0;i<iodd-1;i++)
		{
			//cout<<(arrodd[i]^arrodd[i+1])<<" ";
			int j=i+1;
			while((arrodd[i]^arrodd[j])<=2&&j<iodd)
			{
				countodd--;	
				j++;
			}
			
			
		}
		*/
		unsigned long long int count1=xorPairCount(arrodd,iodd,0)+xorPairCount(arrodd,iodd,2)+xorPairCount(arreven,ieven,0)+xorPairCount(arreven,ieven,2);
		//cout<<countodd<<endl;
		/*for(int i=0;i<ieven-1;i++)
		{
			//cout<<(arreven[i]^arreven[i+1])<<" ";
			int j=i+1;
			while((arreven[i]^arreven[j])<=2&&j<ieven)
			{
				counteven--;
				j++;
			}
			
		}
		*/
	//	cout<<endl;
		//cout<<counteven<<endl;
		cout<<counteven+countodd-count1<<endl;
				
	}
}
