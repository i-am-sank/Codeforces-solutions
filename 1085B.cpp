#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n,k,i;
	cin>>n>>k;
	
	for( i=k-1;i>0;i--)
	if(n%i==0)
	break;
	
	ll x=(n/i)*k+i;
	cout<<x;
	
}
