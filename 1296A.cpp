#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,i,odd,a[2001];
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		odd=0;
		for(i=0;i<n;i++)
		{
			if(a[i]&1)
			odd++;
		}
		if(odd&1)
		{
			cout<<"YES";
		}
		else
		{
			if(n-odd>0&&odd>0)
			{
				cout<<"YES";
			}
			else
			cout<<"NO";
		}
		cout<<endl;
	}
}
