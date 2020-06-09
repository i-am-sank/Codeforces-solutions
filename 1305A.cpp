#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	int t,a[1001],b[1001];
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		cin>>b[i];
		
		sort(a,a+n);
		sort(b,b+n);
		
		for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<b[i]<<" ";
		
		cout<<endl;
	}
}
