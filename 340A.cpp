#include<iostream>
using namespace std;
int hcf(int x,int y)
{
	if(x==0)
	return y;
	else if(y==0)
	return x;
	else if(x>y)
	hcf(x%y,y);
	else
	hcf(x,y%x);
}
int main()
{
	int x,y;
	long a,b,l,ans;
	cin>>x>>y>>a>>b;
	l=(x*y)/hcf(x,y);
	if(a%l==0)
	ans=b/l-a/l+1;
	else
	ans=b/l-a/l;
	
	cout<<ans;
}
