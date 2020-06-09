#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	int n,m,i,j;
	ll a[200001],ans=1;
	
	cin>>n>>m;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	if(n>m)
	{
		cout<<"0";
	}
	else
	{
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				ans=ans*abs(a[i]-a[j]);
				ans=ans%m;
			}
		}
		cout<<ans;
	}
}
