#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
	ll n,a[100001],neg=0,ans=0,z=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>0)
		{
			ans+=a[i]-1;
		}
		else if (a[i]<0)
		{
			ans+=-1-a[i];
			neg++;
		}
		else
		ans+=1,z++;
	}
	if(neg%2!=0)
	ans+=z>0?0:2;
	cout<<ans;
}
