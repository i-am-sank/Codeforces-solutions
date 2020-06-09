#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n,a[200001];
	ll b[100002]={};
	cin>>n;
	for(int i=1;i<=n/2;i++)
	cin>>b[i];
	
	a[1]=0;
	a[n]=b[1];
	
	for(int i=2;i<=n/2;i++)
	{
		if(a[n-i+2]>=b[i]&&)
		a[n-i+1]=b[i],a[i]=0;
		else
		a[n-i+1]=a[n-i+2],a[i]=b[i]-a[n-i+2];
	}
	for(int i=1;i<=n;i++)
	cout<<a[i]<<" ";
	
}
