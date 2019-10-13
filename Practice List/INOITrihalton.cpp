#include<iostream>
#include<algorithm>
using namespace std;
struct str{
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
    	//cout<<L[i].s<<" "<<R[j].s<<endl;
        
            if(L[i].val<=R[i].val)
            {
            	arr[k]=L[i];
            	i++;
			}
			else
			{
				arr[k]=R[j];
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
    
    //cout<<max<<" max\n";
    
}
 
void mergeSort(str  arr[], int l, int r)
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
	int n;
	cin>>n;
	int arr1[n];
	str arr2[n];
	int temp;
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i]>>arr2[i].val>>temp;
		arr2[i].val+=temp;
		arr2[i].pos=i;
	}
	mergeSort(arr2,0,n-1);
	int val=0;
	int arr4[n];
	for(int i=n-1;i>=0;i--)
	{
		
		arr4[n-1-i]=val+arr1[arr2[i].pos]+arr2[i].val;
		val+=arr1[arr2[i].pos];
		
	}
	
	int max=0;
	for(int i=0;i<n;i++)
	{
		//cout<<arr4[i]<<" ";
		if(arr4[i]>=max)
		max=arr4[i];
	}
	//cout<<endl;
	cout<<max<<endl;
	
	
   

	
}
