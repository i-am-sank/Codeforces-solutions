#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m;
	int p[200001];
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		string s;
		cin>>s;
		for(int i=0;i<m;i++)
		cin>>p[i];
		
		int prefix[n+2]={},freq[26]={};
		prefix[0]=1,prefix[n]=-1;
		for(int i=0;i<m;i++)
		prefix[0]+=1,prefix[p[i]]-=1;
		
		for(int i=1;i<n;i++)
		{
		  prefix[i]+=prefix[i-1];
		  freq[s[i]-'a']+=prefix[i];	
		}
		freq[s[0]-'a']+=prefix[0];
		for(int i=0;i<26;i++)
		cout<<freq[i]<<" ";
		cout<<endl;
	}
}
