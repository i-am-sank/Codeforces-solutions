#include<iostream>
#include<algorithm>
using namespace std;
int a[100001];
int search_floor(int l,int r,int x)
{
   while(r-l>1)
   {
   	  int mid=l+(r-l)/2;
   	  if(a[mid]<=x)
   	  l=mid;
   	  else
   	  r=mid;
   }
   return l+1;
}
int main()
{
   int n,q,i;
   long long int m;
   cin>>n;
   for(i=0;i<n;i++)
   cin>>a[i];
   sort(a,a+n);
   cin>>q;
   while(q--)
   {
   	cin>>m;
   	if(m>=a[n-1])
   	cout<<n<<endl;
   	else if(m<a[0])
   	cout<<"0"<<endl;
   	else
   	cout<<search_floor(0,n-1,m)<<endl;
	   }	
}
