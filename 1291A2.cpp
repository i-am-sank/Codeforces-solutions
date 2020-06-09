#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,i,cnt;
	string s,a;
	cin>>t;
	while(t--){
		cin>>n>>s;
		cnt=0;
		
		for(i=0;i<s.size();i++)
		{
			if((s[i]-'0')&1)
			cnt++;
		}
		
		if(cnt%2==1)
		{
			if(cnt==1)
			{
				cout<<"-1";
			}
			else
			{
			  for(i=0;i<s.size();i++) 
			  if(cnt>1&&(s[i]-'0')&1)	
			  cnt--,cout<<s[i];
			}
		}
		else
		{
			if(cnt==0)
			cout<<"-1";
			else
			{
				for(i=0;i<s.size();i++)
				{
					if(cnt>0)
					cout<<s[i];
					
					if((s[i]-'0')&1)
					cnt--;
				}
			}
		}
		cout<<endl;
		
	}
}
