/* you're welcome
   © Abhishek Mishra
*/
#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define mset(arr,val) memset(arr,val,sizeof(arr));
#define endl "\n"
#define noTest 0
typedef long long int lli;
typedef long double llf;
typedef long long ll;
using namespace std;
lli xdiv = 1000000007;
string n,m,temp;
lli l,r,Tsum=0;

lli power(lli x, lli y, lli p) 
{ 
    lli	 res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
} 

lli funS()
{
	char prevD = 'T';
	lli sum =0;
	int len = temp.length();
	for(int i=len-1;i>=0;i--)
	{
		char curD = temp[len-1-i];
		if(curD!=prevD)
		{	
			
			sum = ((sum%xdiv) + (((curD-'0')*(power(10,i,xdiv)%xdiv))%xdiv)%xdiv)%xdiv;
			prevD = curD;
			
		}
	}
	return sum;
}


string increment_numerical_string(string temp)
{
    std::string::reverse_iterator iter = temp.rbegin(), end = temp.rend();
    int carry = 1;
    while (carry && iter != end)
    {
        int value = (*iter - '0') + carry;
        carry = (value / 10);
        *iter = '0' + (value % 10);
        ++iter;
    }
    if (carry)
        temp.insert(0, "1");
        
        return temp;
}
void funM(){
	
	temp = n;
	m=increment_numerical_string(m);
	while(temp!=m)
	{
		//cout<<"L String: "<<temp<<endl;
		Tsum = (Tsum%xdiv + (funS()%xdiv))%xdiv;
		temp = increment_numerical_string(temp);		
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\ASUS\\Desktop\\input.txt","r",stdin);
        freopen("C:\\Users\\ASUS\\Desktop\\output.txt","w",stdout);
    #endif
    
	int t=1;
    if(!noTest)  cin>>t;
	while(t--)
	{
		Tsum = 0;
		cin>>l>>n>>r>>m;
		funM();
		cout<<Tsum<<endl;
	
	}


}


