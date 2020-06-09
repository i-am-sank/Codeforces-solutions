#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		
		set<int > used;
		for(ll i=2;i*i<=n;i++)
		{
			if(n%i==0&&!used.count(i))
			{
				used.insert(i);
				n/=i;
				break;
			}
		}
		for(ll i=2;i*i<=n;i++)
		{
			if(n%i==0&&!used.count(i))
			{
				used.insert(i);
				n/=i;
				break;
			}
		}
		if(used.size()<2||used.count(n)||n==1)
		cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			used.insert(n);
			for(auto it : used ) cout<<it<<" ";
			cout<<endl;
		}
	}
}
