#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[200005],b[200005];
int bs(ll k,int n)
{
	int l=0,r=n-1,ans=-1;
	while(l<=r)
	{
		int mid=l+r;
		mid>>=1;
		if(a[mid]>k)
		r=mid-1;
		else if(a[mid]<=k) l=mid+1,ans=mid;
	}
	return ans+1;
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<m;i++)
	cin>>b[i];
	
	sort(a,a+n);
	for(int i=0;i<m;i++)
	{
		cout<<bs(b[i],n)<<" ";
	}
}
