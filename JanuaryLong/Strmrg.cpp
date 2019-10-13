#include<iostream>
using namespace std;
void recursive(char *a,char *b,char *c,int m,int n,int i)
{
	if(m==0&&n==0)
	cout<<c<<endl;
	if (m != 0)
    {
        c[i] = a[0];
        recursive(a+1,b,b, m-1, n, i+1);
    }
    if (n != 0)
    {
        c[i] = b[0];
        recursive(a, b+1, c, m, n-1, i+1);
    }
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i=0;
		cin>>n>>m;
		char a[n];
		char b[m];
		char c[m+n];
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		cin>>b[i];
		i=0;
		c[m+n]='\0';
		recursive(a,b,c,m-1,n-1,i);
	}
}
