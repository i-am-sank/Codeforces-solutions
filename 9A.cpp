#include<iostream>
using namespace std;
int hcf(int a,int b)
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
int main()
{
	int n,m,a,i;
	cin>>n>>m;
	
	a=6-(n>m?n:m)+1;
	i=hcf(a,6);
	
	cout<<a/i<<"/"<<6/i;
}
