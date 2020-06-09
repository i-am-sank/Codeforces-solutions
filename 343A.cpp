#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll hcf(ll a,ll b)
{
	if(a==0)
	return b;
	if(b==0)
	return a;
	
	return hcf(b,a%b);
}
int main()
{
	ll a,b;
	cin>>a>>b;
    ll h=hcf(a,b);
    a/=h,b/=h;
    if(a>b)
    {
    if(b==1)
	{
	  cout<<a;
	  return 0;	
	}	
    h=a/b;
    cout<<h+b;
	}
	else
	cout<<b;
}
