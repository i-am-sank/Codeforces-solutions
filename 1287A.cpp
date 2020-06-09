#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,k,i,j;
	string s;
	cin>>t;
	while(t--){
		cin>>k>>s;
		j=0;
		for(i=0;i<k;i++)
		{
			if(s[i]=='A')
			{
				j=i;
				break;
			}
		}
		int ans=0;
		while(j<k)
		{
		  if(s[j]=='A')
		  {
		  	ans=max(ans,j-i-1);
		  	i=j;
			}
		j++;		
		}
		if(i<j)
		{
			ans=max(ans,j-i-1);
		}
		cout<<ans<<endl;
	}
}
