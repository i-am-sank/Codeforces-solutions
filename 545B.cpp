#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	int n=0,ans;
	cin>>s>>t;
	for(int i=0;i<s.size();i++)
	if(s[i]!=t[i])
	n++;
	
	if(n%2==0)
	{
		for(int i=0;i<s.size();i++)
		{
		
			
			if(s[i]!=t[i])
			{
			if(n%2==0)
			cout<<s[i];
			else
			cout<<t[i];
			n--;
			}
			else
			cout<<s[i];
		}
	}
	else
	{
		cout<<"impossible";
	}
}
