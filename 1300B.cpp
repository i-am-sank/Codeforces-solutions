#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	int t;
	ll n,a[200001];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<2*n;i++)
		cin>>a[i];
		
		sort(a,a+2*n);

		cout<<a[n]-a[n-1]<<endl;
	}
}
