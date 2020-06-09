#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
ll power(ll a,ll b,ll m)
{   
    a=a%m;
	ll res=1;
	while(b>0){
		if(b&1)
		res=res*a%m;
		
		a=a*a%m;
		b>>=1;
	}
	return res;
}
int main(){
  
  string s;
  ll k,ans=0,m=1e9+7,n;
  cin>>s;
  cin>>k;
  n=s.size();
  for(int i=0;i<s.size();i++)
  {
  	  if(s[i]=='0'||s[i]=='5')
  	  {
  	     ans=(ans+power(2,i,m))%m;	
	  }
  }
  ans=(ans*((power(2,k*n,m)-1)%m*power(power(2,n,m)-1,m-2,m)%m)%m)%m;
  cout<<ans;
}
