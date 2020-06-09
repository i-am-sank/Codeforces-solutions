#include<iostream>

using namespace std;
void merge(long long int arr[], int l, int m, int r) 
{ 
   long long int i, j, k; 
    long long int n1 = m - l + 1; 
    long long int n2 =  r - m; 
  
    
    long long int L[n1], R[n2]; 
  
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
 
    i = 0; 
    j = 0;
    k = l;
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
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
  

void mergeSort(long long int arr[], long long int l,long long int r) 
{ 
    if (l < r) 
    { 
       
        int m = l+(r-l)/2; 
  
      
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
int hcf(long long int x,int y)
{
	if(x==0)
	return y;
	if(y==0)
	return x;
	if(x>y)
	hcf(x%y,y);
	else
	hcf(x,y%x);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	int n,i,p,q;
	long long int a[100001],ans=0,sum=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	} 
	for(i=0;i<n;i++)
	sum+=a[i];
    mergeSort(a,0,n-1);
	p=n-1,q=(p%2==0?2:1);
	for(i=0;i<n/2;i++)
	{ 
	   ans-=p*a[i];
	   ans+=q*a[i+(n%2==0?(n/2):(n+1)/2)];
	   p-=2,q+=2;	
	} 
	ans=2*ans+sum;
	i=hcf(ans,n);
	cout<<ans/i<<" "<<n/i;
}
