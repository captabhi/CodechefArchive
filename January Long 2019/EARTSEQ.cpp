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

const long long MAX_SIZE = 9999999; 

vector<unsigned long long >isprime(MAX_SIZE , true); 
vector<unsigned long long >prime; 
vector<unsigned long long >SPF(MAX_SIZE); 
  
// function generate all prime number less then N in O(n) 
void manipulated_seive(unsigned int N) 
{ 
    // 0 and 1 are not prime 
    isprime[0] = isprime[1] = false ; 
  
    // Fill rest of the entries 
    for (unsigned long long int i=2; i<N ; i++) 
    { 
        // If isPrime[i] == True then i is 
        // prime number 
        if (isprime[i]) 
        { 
            // put i into prime[] vector 
            prime.push_back(i); 
  
            // A prime number is its own smallest 
            // prime factor 
            SPF[i] = i; 
        } 
  
        // Remove all multiples of  i*prime[j] which are 
        // not prime by making isPrime[i*prime[j]] = false 
        // and put smallest prime factor of i*Prime[j] as prime[j] 
        // [ for exp :let  i = 5 , j = 0 , prime[j] = 2 [ i*prime[j] = 10 ] 
        // so smallest prime factor of '10' is '2' that is prime[j] ] 
        // this loop run only one time for number which are not prime 
        for (unsigned long long int j=0; 
             j < (unsigned int)prime.size() && 
             i*prime[j] < N && prime[j] <= SPF[i]; 
             j++) 
        { 
            isprime[i*prime[j]]=false; 
  
            // put smallest prime factor of i*prime[j] 
            SPF[i*prime[j]] = prime[j] ; 
        } 
    } 
} 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	/*#ifndef ONLINE_JUDGE
        freopen("C:\\Users\\ASUS\\Desktop\\input.txt","r",stdin);
        freopen("C:\\Users\\ASUS\\Desktop\\output.txt","w",stdout);
    #endif
    */
    unsigned int N = 3000000 ; 
    manipulated_seive(N); 
    
	int t=50000;
    if(!noTest)  cin>>t;
	while(t--)
	{
		//cout<<"done\n";
		ll n;
		cin>>n;
		//vector<long long> ans;
		ll cnt=0,i=0,diff=1,term1,term2,flag=0;
		unordered_map <long long,int > umap;
		vector<long long > vec;
		ll prev_i,prev_term;
		while(diff<3400&&flag==0)
		{
			for(int j=0;j<diff&&flag==0;j++)
			{
				if(j>24)
				break;
				for(int i=j;i<3400&&flag==0;)
				{
					if(diff==1&&j==0&&i==0)
					{
						term1=prime[i]*prime[3400];
					}
					else
					{
						term1=prev_term;
					}
					
					i=i+diff; 
					term2=prime[i%3400];
					ll temp=term1*term2;
					if(umap.find(temp)==umap.end())
					{
						umap[temp]++;
						if(cnt==n-1)
					{
						
						cout<<term1*prime[3400]<<" ";
						//cout<<term1*prime[0]<<endl;
						vec.push_back(term1*prime[3400]);
						umap[term1*prime[3400]]++;
						
					}
					else
					{
						cout<<term1*term2<<" ";
						//umap[term1*term2]++;	
						vec.push_back(term1*term2);
					}
					cnt++;
					prev_term=term2;
					if(cnt>n-1)
					{
						flag=1;
					}
					
					}
				}
			}
			diff++;
		}
			//cout<<vec.size()<<endl;
	
		cout<<endl;
	}
	//cout<<"done\n";


}

/*while(cnt<n)
		{
		if(cnt==0)	
		cout<<prime[i]*prime[i+1]*prime[n]<<" ";
		else
		cout<<prime[i]*prime[i+1]<<" ";
		cnt++;	
		i++;
		}
		*/
		
			
		/*for(auto i=umap.begin();i!=umap.end();i++)
		{
			//cout<<i->first<<" ";
			if(i->second>1)
			cout<<i->first<<endl;
		}
		cout<<endl;
		*/
			
		/*For(i,0,n)
		{
			//cout<<vec[i]<<" ";
			if(vec[i]>pow(10,9))
			cout<<" OVerflow\n";
			if(__gcd(vec[i],vec[(i+1)%n])==1)
			{
				cout<<"Found uncommon in first\n";
				cout<<i<<" "<<i+1<<endl;
				cout<<vec[i]<<" "<<vec[i+1]<<"\n ";
			}
			if(__gcd(vec[(i+2)%n],__gcd(vec[i],vec[(i+1)%n]))!=1)
			{
				cout<<"uncommon in second\n";
			}
			
		}
		sort(vec.begin(),vec.end());
		For(i,0,n-1)
		{
			if(vec[i]==vec[(i+1)%n])
			cout<<vec[i]<<" "<<t<<endl;
		}
		*/
		
		
