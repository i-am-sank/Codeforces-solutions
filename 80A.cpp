#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,p,a[25],j=0;
	cin>>n>>m;
	bool prime[50];
	memset(prime,true,50);
	for( i=2;i*i<=50;i++)
	{
		for(p=i*i;p<=50;p+=i)
		if(prime[p]==true)
		prime[p]=false;
	}
	for(i=2;i<50;i++)
	if(prime[i]==true)
	a[j]=i,j++;
	
	for(i=0;i<j;i++)
	if(a[i]==n)
	{
		if(a[i+1]==m)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
