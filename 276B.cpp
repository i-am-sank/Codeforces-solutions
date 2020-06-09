#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s){
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=s[s.size()-i-1])
		return false;
	}
	return true;
}
int main(){
	string s;
	int n,i;
	cin>>s;
	n=s.size();
	if(ispalindrome(s)||n%2==1)
	{
		cout<<"First";
	}
	else if(n%2==0)
	cout<<"Second";
}
