#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,ans=0;
	cin>>n>>k;
	int a[2001];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	for(int i=0;i<n;i++)
	{
		if((a[i]+k)<=5)
		ans++;
	}
	cout<<ans/3;
}
