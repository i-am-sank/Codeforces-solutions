#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s;
	cin>>s;
	n=s.size();
    
    for(int i=1;i<n;i++)
    {
    	if(s[i]==s[i-1]&&s[i]!='a')
    	s[i]=i==n-1?'a':(s[i+1]=='a'?'b':'a');
    	
    	else if(s[i]==s[i-1]&&s[i]=='a')
    	s[i]=(i==n-1?(s[i]+1):(s[i+1]=='b'?'c':'b'));
   
	}
	
	cout<<s;
	
}
