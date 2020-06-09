#include<bits/stdc++.h>
using namespace std;
int a[16],i;
int f(int n){
	if(n==0&&i==n||n%360==0)
	return 1;
	if(i>n-1)
	return INT_MIN;
	
	return f(n-a[++i]);
	
	return f(n+a[++i]);
}
int main(){
	int n;
	cin>>n;
	for( i=0;i<n;i++)
	cin>>a[i];
	cout<<f(a[0]);
}
