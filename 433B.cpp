#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,m,l,r,t;
	cin>>n;
	long long int v[n],u[n],s1[n],s2[n];
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		u[i]=v[i];
	}
	cin>>m;
	s1[0]=v[0];
	for(int i=1;i<n;i++)
	s1[i]=s1[i-1]+v[i];
	
	sort(u,u+n);
	s2[0]=u[0];
	for(int i=1;i<n;i++)
	s2[i]=s2[i-1]+u[i];
	
	while(m--)
	{
		cin>>t>>l>>r;
		if(t-1)
		{
			if(l-1)
			cout<<s2[r-1]-s2[l-2]<<endl;
			else
			cout<<s2[r-1]<<endl;
		}
		else 
		{   
		    if(l-1)
			cout<<s1[r-1]-s1[l-2]<<endl;
			else
			cout<<s1[r-1]<<endl;
		}
	}
}
