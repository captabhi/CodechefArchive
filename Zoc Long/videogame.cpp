#include<iostream>
using namespace std;
int main()
{
	int n,h,i;
	cin>>n>>h;
	int arr[n];
	char temp,boxstatus='0';
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>temp;
	i=0;
	while(temp!='0')
	{
         switch(temp)
         {
         	case '1' : if(i>0)
                         i--;
                        
                        break;
            case '2' : if(i<n-1)
                         i++;
                         
                        break;
            case '3' : if(arr[i]>0&&boxstatus=='0')
         	          {
         	          	arr[i]--;
         	            boxstatus='1';
         	            
						 }  
						 
         	           break; 
			case '4' : if(arr[i]<h&&boxstatus=='1')
                        {
                        	arr[i]++;
			             boxstatus='0';
			             
			            }
			            
					    break;						   
						           
			             
		}
		cin>>temp;
	}
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;

	
}
