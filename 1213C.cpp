#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	int q;
	cin>>q;
	ll n,m;
	vector<vector<int> > a;
//	vector<int > b;
	a[0].push_back(0);
	for(int i=1;i<10;i++)
	{
		int j=i;
		while(j!=0)
		{
			a[i].push_back(j);
			j+=i;
			j=j%10;
		}
	}
/*	while(q--)
	{
		cin>>n>>m;
		
	}*/
	for(int i=0;i<10;i++)
	for(int j=0;j<a[i].size();i++)
	cout<<a[i][j]<<" ";
}
