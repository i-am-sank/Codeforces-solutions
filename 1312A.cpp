#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		if((n&1)||n==4)
		{
			cout<<"NO\n";
		}
		else 
		{
			if(2*m==n)
			cout<<"YES\n";
			else
			cout<<"NO\n";
		}
	}
}
