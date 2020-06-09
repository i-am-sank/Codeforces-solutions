#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	int n,a[102],k=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
/*	for(int i=1;i<n-1;i++)
	{
		if(a[i]==0&&(a[i-1]&1)&&(a[i+1]&1))
		a[i+1]=0,k++;
	}
	cout<<k;*/
	int k=0,ans=0;
	vector<int > p;
	for(int i=1;i<n-1;i++)
	{
		if(a[i]==0&&(a[i-1]&1)&&(a[i+1]&1))
		p.push_back(i);
	}
	int i=1;
	ans=p.size();
	while(i<p.size())
	{
		while(i<p.size()&&p[i]-p[i-1]==2) k++,i++;
		
		if(k>0)
		ans-=1,k=0;
		
		i++;
	}
	cout<<ans;
}
