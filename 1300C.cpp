#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	int n;
	ll a[100001];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	sort(a,a+n);
	
	cout<<a[n-1]<<" ";
	for(int i=0;i<n-1;i++)
	cout<<a[i]<<" ";
}
