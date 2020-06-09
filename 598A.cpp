#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	long long int sum=0,n,x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		x=log(n)/log(2);
		sum=n*(n+1)/2-2*(pow(2,x+1)-1);
		cout<<sum<<endl;
	}
}
