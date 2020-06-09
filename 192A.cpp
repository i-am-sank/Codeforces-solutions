#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
	ll n,i,j;
	ll a[100001]={};
	cin>>n;
	for(i=1;i<=100000;i++)
	a[i]=a[i-1]+i;
	
	i=1,j=100000;
	while(i<=j)
	{
		if(a[i]+a[j]<n)
		i++;
		else if(a[i]+a[j]>n)
		j--;
		else
		break;
	}
	if(n!=1&&a[i]+a[j]==n)
	cout<<"YES";
	else
	cout<<"NO";
}
