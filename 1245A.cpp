#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,a,b,c,k;
	string s;
	vector<char > ans;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b>>c;
		cin>>s;
		k=n;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='R'&&b>0)
			ans.push_back('P'), b--;
			else if(s[i]=='P'&&c>0)
			ans.push_back('S'), c--;
			else if(s[i]=='S'&&a>0)
			ans.push_back('R'), a--;
			else
			ans.push_back('/'),k--;
		}
	//	cout<<a<<" "<<b<<" "<<c<<endl;
	//for(int i=0;i<n;i++)
	//cout<<ans[i];
		if(2*k<n)
		cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++)
			{
				if(ans[i]=='/')
				{
					if(a>0)
					while(a>0)
					{
						cout<<"R";
					//	cout<<a<<" ";
					a--;
					}
					else if(b>0)
					while(b>0)
					{
						cout<<"P";
						b--;
					}
					else
					while(c>0)
					{
						cout<<"S";
						c--;
					}
				}
				else
				cout<<ans[i];
			}
			cout<<endl;
		}
		ans.clear();
	}
}
