#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int n,ans=0,i;
	cin>>n;
	cin>>s;
	for(i=0;i<n;i++)
	if(s[i]=='A')
	ans++;
	
	if(2*ans>n)
	cout<<"Anton";
	else if(2*ans==n)
	cout<<"Friendship";
	else
	cout<<"Danik";
}
