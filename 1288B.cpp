#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
	int t;
	ll A,B;
	cin>>t;
	while(t--){
		cin>>A>>B;
		ll ans=0;
	    ll n=9,x;
	    while(B>=n) 
	     {
	     	n=n*10+9;
	     	ans++;
		 }
		cout<<ans*A<<endl;
	}
}
