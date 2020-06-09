#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n+2];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int cnt=0;
		sort(a,a+n);
		for(int i=1;i<n;i++)
		{
			if(a[i]>a[i-1])
			cnt++;
		}
		cout<<cnt+1<<endl;
	}
}
