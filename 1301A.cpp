#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	string a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		bool p = true;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]!=c[i]&&b[i]!=c[i])
			p=false;
		}
		if(p)
		cout<<"YES";
		else
		cout<<"NO";
		cout<<endl;
	}
}
