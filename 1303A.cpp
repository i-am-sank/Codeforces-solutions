#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		bool p = false;
		int j=0,cnt=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='1')
			p=true,j=i;
			
			else if(p&&s[i]=='0')
			{
				cnt++;
			}
		}
		for(int i=s.size()-1;i>j;i--)
		if(s[i]=='0')
		cnt--;
		
		if(cnt<0)
		cnt=0;
		
		cout<<cnt<<endl;
	}
}
