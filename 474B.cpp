#include<iostream>
using namespace std;
long int a[100001];
long int floor(int l,int r,int x)
{
    int m;
	while(r-l>1)
	{
		 m=l+(r-l)/2;
		 
		 if(a[m]==x)
		 return m;
		 if(a[m]<x)
		 l=m;
		 else
		 r=m;
	   	
	}
	
return r;
}
int main()
{
	long int n,m,x;
	cin>>n;
	cin>>x;
	a[0]=0;
	a[1]=x;
//	cout<<a[0]<<" "<<a[1]<<" ";
	for(int i=2;i<=n;i++)
	{
		cin>>x;
		a[i]=x+a[i-1];
//		cout<<a[i]<<" ";
	}
	cin>>m;
	while(m--)
	{
		cin>>x;
		cout<<floor(0,n,x)<<endl;
	}
}
