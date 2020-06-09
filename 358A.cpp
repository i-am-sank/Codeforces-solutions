#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n;
	vector<int > a;
	for(int i=0;i<n;i++)
	cin>>x,a.push_back(x);
	bool p=false;
	for(int i=0;i<=n-4;i++)
	{
		if(a[i]<a[i+2]&&a[i+2]<a[i+1]&&a[i+1]<a[i+3])
		{
			p=true;
			break;
		}
	}
	if(p)
	cout<<"yes";
	else
	cout<<"no";
}
