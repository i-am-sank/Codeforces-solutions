#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
	int t;
	ll n,i,x,y;
	string s;
	cin>>t;
	while(t--){
		cin>>n>>s;
		ll l1=1,r1=1,l=1,r=1,min=0;
		x=0,y=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='L')
			x--;
			else if(s[i]=='R')
			x++;
			else if(s[i]=='U')
			y++;
			else
			y--;
			
		 if(x==0&&y==0)
			{
			  r1=i+1;
			  if(min==0)
			  min = r1-l1+1,r=r1,l=l1;
			  else if(min>r1-l1+1)
			  min = r1-l1+1,r=r1,l=l1;
			  
			  l1=r1; 	
			}
		//cout<<x<<" "<<y<<endl;	
		}
		for(i=1;i<n;i++)
		{
		if(s[i]=='L'&&s[i-1]=='R')
		l=i,r=i+1;
		else if(s[i]=='R'&&s[i-1]=='L')
		l=i,r=i+1;
		else if(s[i]=='U'&&s[i-1]=='D')
		l=i,r=i+1;
		else if(s[i]=='D'&&s[i-1]=='U')
		l=i,r=i+1;	
		}
		
		if(r==1)
		cout<<"-1"<<endl;
		else
		cout<<l<<" "<<r<<endl;
	}
	
}
