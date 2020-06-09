#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
	int n;
	ll a[102]={};
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	
	sort(a+1,a+n+1);
	
	for(int i=1;i<n+1;i+=2)
	cout<<a[i]<<" ";
	
	for(int i=n&1?n-1:n;i>1;i-=2)
	cout<<a[i]<<" ";
}
