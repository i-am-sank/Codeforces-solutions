#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
	ll a,b;
	cin>>a>>b;
	if(a==b&&b==0)
	{
		cout<<"0";
		return 0;
	}
	if(a>b)
	cout<<"-1";
	else if(a==b)
	cout<<"1\n"<<a;
	else
	{
        
		if((b-a)&1)
		cout<<"-1";
		else
		{
		    ll  c=(b-a);
			c>>=1;
			if((c&a)==0)
			{
				cout<<"2\n";
				cout<<a+c<<" "<<c;
			}
			else
			cout<<"3\n"<<a<<" "<<c<<" "<<c;
		}
	}
}
