#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,a[100001],i,ans=1,m=1;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=1;i<n;i++)
	{
		if(a[i]>a[i-1])
		ans++;
		else
		{
			ans=1;
		}
		m=max(m,ans);
	}
	cout<<m;
}
