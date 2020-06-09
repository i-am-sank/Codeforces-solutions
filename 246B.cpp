#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,ans=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		ans+=x;
	}
	if(ans%n==0)
	cout<<n;
	else
	cout<<n-1;
}
