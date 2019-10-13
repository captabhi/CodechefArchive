#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
unsigned nChoosek( unsigned long long n, unsigned long long k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    int result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    //cout<<result<<endl;
    return result;
}
int main()
{
	
	int n,i,temp;
	cin>>n;
	unsigned long long int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	temp=arr[0];
	unsigned long long int cnt=0;
	long long int noways=0;
	for(i=1;i<n;i++)
	{
		cnt=1;
		while(temp==arr[i])
		{
			cnt++;
			i++;
		}
		//cout<<"CNT :"<<cnt<<" "<<arr[i-1]<<endl;
		temp=arr[i];
		if(cnt>1)
		noways+=nChoosek(cnt,2);
	}
	
	cout<<noways;
}
