	#include<bits/stdc++.h>
	#define range 49
	#define range1 5
	using namespace std;
	
	//int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	long long int arr[51];
	
	 long int gcd(long int a, long int b) 
	{ 
	    if (b == 0) 
	        return a; 
	    return gcd(b, a % b);  
	} 
	void printarray1(int n)
	{
		for(int i=0;i<n;i++ )
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
	  
	int main()
	{
		srand(time(0));
		int t;
		cin>>t;
		while(t--)
		{
			
			int n;
			cin>>n;
			//n=(rand()%range1)+2;
			//cout<<n<<endl;
			
			queue <int> unconnect,connect;
			for(int i=0;i<n;i++)
			{
				cin>>arr[i];
				//arr[i]=(rand()%range)+2;
			}
			/*for(int i=0;i<n;i++)
			{
				cout<<arr[i]<<" ";
				}
				cout<<"\n";
			*/
			if(n==1)
			{
				cout<<0<<endl;
				printarray1(n);
				continue;
			}
			//long long var1=arr[0];
			int j=0,k=0,flag=0;
			for(int i=1;i<n;i++)
			{
				if(gcd(arr[0],arr[i])>1)
				{
					unconnect.push(arr[i]);  // j= length of unconnected
					j++;
					}
				else
				{
					connect.push(arr[i]);
					k++;									//k= length of connected
					flag=1;
						}		
			}
			if(flag==0)
			{
				if(arr[0]==47)
				arr[0]=43;
				else
				arr[0]=47;
				cout<<1<<endl;
				printarray1(n);
				continue;
			}
			else
			{
				for(int i=0;i<k;i++)
				{
					int var=connect.front();
					j=unconnect.size();
					for(int l=0;l<j;l++)
					{
						if(gcd(var,unconnect.front())==1)
						{
							connect.push(unconnect.front());
							k++;
							unconnect.pop();
						}
						else
						{
							int temp=unconnect.front();
							unconnect.pop();
							unconnect.push(temp);
						}
					}
					connect.pop();
				}
				if(unconnect.empty())
				{
					cout<<0<<"\n";
					printarray1(n);
				}
				else
				{
					
					for(int i=0;i<n;i++)
					{
						//cout<<"unconnect\n"<<unconnect.front()<<endl;
						if(arr[i]==unconnect.front())
						{
							
							if(arr[i]==47)
							arr[i]=43;
							else
							arr[i]=47;
							cout<<1<<"\n";
							printarray1(n);
						}
					}
				}
	
			}
			
		}
	}
