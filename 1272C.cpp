#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k,i,m,j,ans=0;
	string s;
	cin>>n>>k;
	cin>>s;
	char c[k];
	
	for(i=0;i<k;i++)
	cin>>c[i];
	m=0;
	for(i=0;i<n;i++)
	{ 
	   m=0;
		for(j=0;j<k;j++)
		{
			if(s[i]==c[j])
			m++;
		}
		if(m>0)
		s[i]='1';
		else
		s[i]='0';
	}
	j=0;
	if(s[0]=='1')
	i=-1;
	else
	i=0;
	s[n]='0';
	while(j<=n)
	{
		if(s[j+1]=='1')
		j++;
		else
		{
		  ans+=(j-i)*(j-i+1)/2;
		  
		  j++;
		  i=j;	
		}
	}
	cout<<ans;
}
