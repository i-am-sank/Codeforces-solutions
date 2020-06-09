#include<bits/stdc++.h>
using namespace std;
int mdigit(long long int n){
   int a=0,b;
   while(n>0)
   {
   	 b=n%10;
   	  a=max(b,a);
   	  n=n/10;
   }
   return a;
}
int main(){
	long long int n,ans=0;
	cin>>n;
	while(n>0)
	{
		n-=mdigit(n);
		ans++;
	}
	cout<<ans;
}
