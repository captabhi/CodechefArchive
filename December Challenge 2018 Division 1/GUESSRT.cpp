/* you're welcome
   © Abhishek Mishra
*/
#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define M 1000000007
#define mset(arr,val) memset(arr,val,sizeof(arr));
#define endl "\n"
#define noTest 0
typedef long long int lli;
typedef long double llf;
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull fast_exp(ull base, ull exp)
{
    ull res=1;
    while(exp>0) {

        if(exp%2==1) res=(res*base)%M;

        base=(base*base)%M;

        exp/=2;

    }
    return res;
}
ull modInv(ull number, ull mod)
{
    return fast_exp(number,mod-2);
}  
ll modDivide(ll a, ll b, ll m) 
{ 
    a = a % m; 
    ll inv = modInv(b, m); 
    return (inv * a) % m; 
} 
int main()
{
	/*ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\ASUS\\Desktop\\input.txt","r",stdin);
        freopen("C:\\Users\\ASUS\\Desktop\\output.txt","w",stdout);
    #endif
    */
	int t=1;
    if(!noTest)  cin>>t;
	while(t--)
	{
		ll n,k,m;
		ll num,den;
		cin>>n>>k>>m;
		num=n-1;
		den=n;
		ll num1,den1;
		if(m%2==0)
		{
			
			num1=n+k-1;
			den1=n+k;	
			num=fast_exp(num,m/2);
			num=num%M;
			den=fast_exp(den,m/2);
			den=den%M;
			
			//cout<<num1<<" "<<den1<<endl;
			num=((num)%M*(num1%M))%M;
			den=((den)%M*(den1%M))%M;
			num=(den%M)-(num%M);
			//
			ll hcf=__gcd(num,den);
			num=modDivide(num,hcf,M);
			den=modDivide(den,hcf,M);
			cout<<num<<" "<<den<<endl;
			ll var=modInv(den,M);
			var=var%M;
			cout<<((num%M)*(var%M))%M<<endl;
			
		}
		else
		{
			//cout<<"Odd\n";
			num=fast_exp(num,(m/2)+1);
			num=num%M;
			den=fast_exp(den,(m/2)+1);
			den=den%M;
			//cout<<num1<<" "<<den1<<endl;
			//cout<<num<<" "<<den<<endl;
			num=((den)%M-(num%M))%M;
			//cout<<num<<" "<<den<<endl;
			ll hcf=__gcd(num,den);
			num=modDivide(num,hcf,M);
			den=modDivide(den,hcf,M);
			//cout<<num<<" "<<den<<endl;
			cout<<num<<" "<<den<<endl;
			ll var=modInv(den,M);
			var=var%M;
			cout<<((num%M)*(var%M))%M<<endl;
		}
	}


}


