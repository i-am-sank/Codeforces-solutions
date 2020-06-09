#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	long long int n,d,x;
	
	cin>>t;
	while(t--)
	{
		cin>>n>>d;
	    x=(1-n)*(1-n)-4*(d-n);
	    if(x>=0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
}
