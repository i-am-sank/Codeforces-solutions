#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,a,b,fib[3];
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>n;
		fib[0]=a,fib[1]=b;
		fib[2]=a^b;
		cout<<fib[n%3]<<endl;
	}
}
