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
//ll arr[]={0,2,5,8,11,14,17,20,23,26,29,32,35};
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	/*#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\ASUS\\Desktop\\input.txt","r",stdin);
        freopen("C:\\Users\\ASUS\\Desktop\\output.txt","w",stdout);
    #endif
    */
	int t=1;
    if(!noTest)  cin>>t;
	while(t--)
	{
	ll n;
	cin>>n;
	ll cntarr[n+1];
	ll seq[n+2];
	mset(cntarr,0);
	ll abc,bcd,ad,eh,fg,efg,fgh,ade,e,f,g,h,a,b,c,d,adf;
	
	{
		cout<<1<<" "<<1<<" "<<2<<" "<<3<<endl<<flush;
		cntarr[1]++;cntarr[2]++;cntarr[3]++;
		cin>>abc;
		//abc=arr[1]^arr[2]^arr[3];
		cout<<1<<" "<<2<<" "<<3<<" "<<4<<endl<<flush;
		cin>>bcd;
		cntarr[2]++;cntarr[3]++;cntarr[4]++;
		//bcd=arr[2]^arr[3]^arr[4];
		ad=abc^bcd;
		cout<<1<<" "<<1<<" "<<4<<" "<<5<<endl<<flush;
		cin>>ade;
		cntarr[1]++;cntarr[4]++;cntarr[5]++;
		//ade=arr[1]^arr[4]^arr[5];
		e=ade^ad;
		seq[5]=e;
		cout<<1<<" "<<1<<" "<<4<<" "<<6<<endl<<flush;
		cin>>adf;
		cntarr[1]++;cntarr[4]++;cntarr[6]++;
		//adf=arr[1]^arr[4]^arr[6];
		f=adf^ad;
		seq[6]=f;
		cout<<1<<" "<<5<<" "<<6<<" "<<7<<endl<<flush;
		cin>>efg;
		cntarr[5]++;cntarr[6]++;cntarr[7]++;
		//efg=arr[5]^arr[6]^arr[7];
		g=efg^e^f;
		seq[7]=g;
		cout<<1<<" "<<6<<" "<<7<<" "<<8<<endl<<flush;
		cin>>fgh;
		cntarr[6]++;cntarr[7]++;cntarr[8]++;
		//fgh=arr[6]^arr[7]^arr[8];
		h=fgh^f^g;
		seq[8]=h;
	}
	ll idx1=7,idx2=8,idx3,temp;
	for(int i=9;i<=n;i++)
	{
		idx3=i;
		cout<<1<<" "<<idx1<<" "<<idx2<<" "<<idx3<<endl<<flush;
		cin>>temp;
		cntarr[idx1]++;cntarr[idx2]++;cntarr[idx3]++;
		//temp=arr[idx1]^arr[idx2]^arr[idx3];
		seq[i]=temp^seq[idx1]^seq[idx2];
		idx1=idx2;
		idx2=idx3;
		
	}
	cout<<1<<" "<<2<<" "<<idx1<<" "<<idx2<<endl<<flush;
	cin>>temp;
	cntarr[2]++;cntarr[idx1]++;cntarr[idx2]++;
	//temp=arr[2]^arr[idx1]^arr[idx2];
	seq[2]=temp^seq[idx1]^seq[idx2];
	cout<<1<<" "<<3<<" "<<5<<" "<<idx2<<endl<<flush;
	cntarr[3]++;cntarr[5]++;cntarr[idx2]++;
	cin>>temp;
	//temp=arr[3]^arr[5]^arr[idx2];
	seq[3]=temp^seq[idx2]^seq[5];
	seq[1]=abc^seq[2]^seq[3];
	seq[4]=bcd^seq[2]^seq[3];
	
	cout<<2<<" "<<flush;
	for(int i=1;i<=n;i++)
	cout<<seq[i]<<" "<<flush;
	cin>>temp;
	
	}


}


