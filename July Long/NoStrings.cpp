#include<iostream>
using namespace std;
int cnt=0,cntidx;

struct str{
	char s;
	int pos;
	int val;
};
void merge(str  arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* create temp arrays */
    str L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 	int max=0;
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
    	cout<<L[i].s<<" "<<R[j].s<<endl;
        if (L[i].s < R[j].s)
        {
        	if(n2-j>max)
        	{
        		max=n2-j;
        		cntidx=L[i].pos;
			}
			if((n2-j)>L[i].val)
        	L[i].val=(n2-j);
        	cnt+=(n2-j);
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
    
    cout<<max<<" max\n";
    
}
 
/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(str  arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;
 
        // Sort first and second halves
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

				
		int indx=0,i=0,cntarr[26]={0},temp,maxi=0;
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
		

			mergeSort(s,0,i-1);	
			for(int k=0;k<i;k++)
			cout<<s[k].val<<" ";
			cout<<endl;
			cout<<cnt<<" "<<cntidx<<" "<<endl;
		
	}
}
