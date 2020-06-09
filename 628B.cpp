#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	
	string s;
	cin>>s;
	ll c=0,num;
	c+=(s[s.size()-1]-'0')%4==0?1:0;
	for(ll i=s.size()-2;i>=0;i--)
	{
		if(i>=0)
		{
		num=(s[i]-'0')*10+s[i+1]-'0';
		if((s[i]-'0')%4==0)
		{
			c+=1;
		}
		
		if(num%4==0)
		{
			c+=i+1;
		}
		}
	}
	cout<<c<<endl;
} 
