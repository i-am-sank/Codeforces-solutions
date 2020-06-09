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
		if(cnt&1)
		{
			for(i=0;i<s.size();i++)
			if((s[i]-'0')&1&&cnt>1)
		    {
		    	cnt--;
		    	cout<<s[i];
			}
			cnt=0;	
		}
		else
	    {
	     if(cnt==0)
		 cout<<"-1";
		 else
		 {
		 for(i=0;i<s.size();i++)
		 if((s[i]-'0')&1)
		 {	    	
		    cout<<s[i];
				
		 }

	    }	
	}
	if(cnt==1&&s.size()>1)
	{
	   for(i=0;i<s.size();i++)
	   {
	   	if((s[i]-'0')%2==0&&cnt==1)
	   	cout<<s[i];
	   	else if((s[i]-'0')&1)
	   	cnt--,cout<<s[i];
	   	
		}	
	}
	else if(s.size()==1&&(s[0]-'0')&1)
	cout<<"-1";
			
		cout<<endl; 
	}
}
