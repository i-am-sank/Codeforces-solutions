#include<iostream>
using namespace std;
long long int a[400001];
long long int hcf(long long int a,long long int b)
{
	if(a==0)
	return b;
	if(b==0)
	return a;
	if(a>b)
	hcf(a%b,b);
	else
	hcf(a,b%a);
}
long long int fac(long long int n)
{
	long long int ans=0,i;
	for( i=1;i*i<n;i++)
	if(n%i==0)
	ans+=2;
	
	if(n%(i*i)==0)
	ans++;
	
	return ans;
}
int main()
{
	long long int res=0;
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++)
	res=hcf(res,a[i]);
	
	cout<<fac(res);
}
