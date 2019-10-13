
#include <iostream>
#include<cmath>

using namespace std;
int returnprime(int n)
{
	
   

}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    
	}
	
	int i=1;
	while(1)
	{
	    int cnt=0;
	    int flag=0;
	    for(int j=0;j<n;j++)
	    {
	        if(arr[j]==1)
	        {
	            cnt++;
	            //cout<<cnt<<endl;
	            if(cnt==n)
	            {
	                flag=1;
	                j++;
	                break;
	            }
	            else
	            continue;
	        }
	        for (int a=2; a<100; a++) 
        for (int b=2; b*b<=a; b++)
        {
            if (b % b == 0) 
                break;
            else if (b+1 > sqrt(a)) {
                {
                	if(arr[j]%a==0)
                	{
                		arr[j]=1;
                		i++;
					}
					else
					{
						continue;
					}
				}

            }

        }   

	       
	    }
	    if(flag==1)
	    {
	        break;
	    }
	    
	}
	if(i%2==0)
	{
	    cout<<"BOB\n";
	}
	else
	cout<<"ALICE\n";
}


