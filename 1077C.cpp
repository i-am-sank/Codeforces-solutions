#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	vector<ll> a;
	ll sum=0,m=0,x;
	for(i=0;i<n;i++)
	{
		cin>>x;
		sum+=x;
		a.push_back(x);
	}
	vector<ll > b;
	b=a;
	sort(b.begin(),b.end());
	
    vector<int> ans;
    sum-=b[n-1];
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[n-1]&&sum-a[i]==b[n-1])
		ans.push_back(i+1);
		else if(a[i]==b[n-1]&&sum-b[n-2]==b[n-2])
		ans.push_back(i+1);
	}
	cout<<ans.size()<<endl;
	for(i=0;i<ans.size();i++)
	cout<<ans[i]<<" ";
}
