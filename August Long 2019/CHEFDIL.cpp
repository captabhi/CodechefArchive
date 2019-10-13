/* you're welcome
   © Abhishek Mishra
*/
#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a);i<(b);i++)
#define xdiv 1000000007
#define mset(arr,val) memset(arr,val,sizeof(arr));
#define endl "\n"
#define noTest 0
typedef long long int lli;
typedef long double llf;
typedef long long ll;
using namespace std;
char toggle(char c);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\ASUS\\Desktop\\input.txt","r",stdin);
        freopen("C:\\Users\\ASUS\\Desktop\\output.txt","w",stdout);
    #endif
	int t=1;
    cin>>t;
    string str;
	while(t--)
	{
		ll mark=1;
		cin>>str;
		ll sz=str.length();
		For(i,0,sz){
			if(str[i]=='1'){
				str[i] = 'x';
				if(i-1>=0&&str[i-1]!='x'){
					str[i-1] = toggle(str[i-1]);
				}
				if(i+1<sz&&str[i+1]!='x'){
					str[i+1] = toggle(str[i+1]);
				}
			}
		}
		for(int i=sz-1;i>=0;i--){
			if(str[i]=='1'){
				str[i] = 'x';
				if(i-1>=0&&str[i-1]!='x')
				{
					str[i-1] = toggle(str[i-1]);
				}
				if(i+1<sz&&str[i+1]!='x')
				{
					str[i+1] = toggle(str[i+1]);
				}
			}
		
		}
		For(i,0,sz){
			if(str[i]=='0'){
				mark=0;
				break;
			}
		}
		if(mark==1)
		cout<<"WIN\n";
		else
		cout<<"LOSE\n";
	}
}

char toggle(char c){
	if(c=='1'){
		return '0';	
	}
	else{
		return '1';	
	} 
}


