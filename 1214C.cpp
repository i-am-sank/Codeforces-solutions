#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s;
	int i;
	stack<char> st;
	int f[2]={};
	cin>>n>>s;
	for(i=0;i<n;i++)
	{
		if(!st.empty())
		{
			if(st.top()=='('&&s[i]==')')
			st.pop();
			else
			st.push(s[i]);
		}
		else
		st.push(s[i]);
	}
	
	if(st.size()==0)
	cout<<"Yes";
	else
	{
		while(!st.empty())
		{
		   f[')'-st.top()]++;
		   st.pop();	
		}
		if(f[0]==1&&f[0]==f[1])
		cout<<"Yes";
		else
		cout<<"No";
	}
}
