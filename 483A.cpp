#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll l,r,a,b,c;
	cin>>l>>r;
    
     if(!(l&1))
     {
     	if(r-l>=2)
     	cout<<l<<" "<<l+1<<" "<<l+2;
     	else
     	cout<<"-1";
	 }
	 else
	 {
	 	if(r-l>=3)
	 	cout<<l+1<<" "<<l+2<<" "<<l+3;
	 	else
	 	cout<<"-1";
	 }
}
