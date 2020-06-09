#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	int t;
	ll a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		
	    if(b>a)
	    {
	    	if((a+b)%3==0&&2*a>=b)
	    	cout<<"YES";
	    	else
	    	cout<<"NO";
		}
		else
		{
	     	if((a+b)%3==0&&2*b>=a)
	    	cout<<"YES";
	    	else
	    	cout<<"NO";
		}
		cout<<endl;
	}
}
