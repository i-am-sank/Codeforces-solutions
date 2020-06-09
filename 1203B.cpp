#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int q,n,a[401];
	cin>>q;
	while(q--)
	{
		cin>>n;
		set<ll> s;
		int freq[10001]={};
		bool p=true;
		for(int i=0;i<4*n;i++)
		cin>>a[i];
		
		sort(a,a+4*n);
		for(int i=0;i<4*n;i++)
		freq[a[i]]++;
		
		for(int i=1;i<10001;i++)
		if((freq[i]&1))
		p=false;
		
		for(int i=0;i<2*n;i++)
		{
			s.insert(a[i]*a[4*n-i-1]);
		}
		if(s.size()==1&&p)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
