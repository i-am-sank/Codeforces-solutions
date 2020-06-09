#include<bits/stdc++.h>
using namespace std;
int main(){
	
	long long int n,k,x,a[200001],m=0,c;
	cin>>n>>k>>x;
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
		if(m<a[i])
		m=a[i],c=i;
	}
	while(k--){
		a[c]=a[c]*x;
	}
	c=0;
	for(long long int i=0;i<n;i++)
	c=c|a[i];
	
	cout<<c;
}
