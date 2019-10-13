#include<iostream>
#include<cmath>
#define ctr 0
//deadcafebd
using namespace std;
int cnt=0,indx=0,cntidx,pos;
int idxcntarr[26][26];

char a;
struct str{
	char s;
	int pos;
	int val;
	
};
void printArray(str A[], int l,int m,str B[])
{
    int i;
    for (i=l; i <m; i++)
    {
    	//cout<<A[i].s;
    	 B[i]=A[i];	
	}
       //cout<<endl;
}
void merge(str arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
       str L[n1], R[n2];
 
   
    for (i = 0; i < n1; i++)
    {
    	L[i] = arr[l + i];
    	L[i]=arr[l+i];
	}
        
    for (j = 0; j < n2; j++)
    {
    	R[j] = arr[m + 1+ j];
    	R[j] = arr[m + 1+ j];
	}
        
 
    
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
    	
        if (L[i].s < R[j].s)
        {
        	cnt+=(n1-i);
        	
        	if(n1-i>cntidx)
        	{
        		cntidx=n1-i;
        		//indx=m+1+j+1;
        		
        		pos=R[j].pos;
        		//cout<<pos<<R[j].s<<cntidx<<endl;
        		//cout<<a<<cntidx<<m+1<<endl;
        		
			}
            arr[k] = R[j];
            j++;
        }
        else
        {
            arr[k] = L[i];
            i++;
        }
        k++;
    }
 
    
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
        while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(str arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);	
        merge(arr, l, m, r);
    }
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{

				
		int indx=0,i=0,cntarr[26]={0},max=0,temp,maxi=0;
		cnt=0;cntidx=0;
		str s[100000];
		string s1;
		char tempchar;
		cin>>s1;
		i=s1.length();
		for(int k=0;k<i;k++)
		{
			s[k].s=s1[k];
			temp=s[k].s-'a';
			cntarr[temp]++;	
			s[k].pos=k;
			s[k].val=0;
		}
		
		for(int k=0;k<26;k++)
		{
			if(cntarr[k]>max)
			{
				max=cntarr[k];
				maxi=k;
			}
		}
				str B[50000];
				printArray(s,0,i,B); 
				
				mergeSort(B,0,i-1);
				cout<<pos<<endl;
			char oldchar=s[pos].s;
			int oldcnt=cnt,mincount;
			int k=0;
			while(k<26)
			{	cnt=0;
				char charvar='a'+k;
				
				int absdiff=abs(charvar-oldchar);
				str *B=new str[50000];
				printArray(s,0,i,B) ;
				B[pos].s=charvar;
				mergeSort(B,0,i-1);
				//cout<<cnt<<endl;
				if(charvar=='d')
				{
					cout<<absdiff<<" "<<cnt<<endl;
				}
				if(cnt+absdiff<oldcnt)
				{
				oldcnt=cnt+absdiff;	
				}
				
				
				k++;
				}	
			cout<<oldcnt<<endl;
		
	}
}
