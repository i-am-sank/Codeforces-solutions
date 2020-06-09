#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i;
	long long id[101];
	vector<long long> ans(1000);
	cin>>n>>k;
	for(i=0;i<n;i++)
	cin>>id[i];
	
	if(k>0)
	ans.push_back(id[0]);
	for(i=1;i<n;i++)
	{
		int cnt=0;
		for(int j=0;j<ans.size();j++)
		if(id[i]!=ans[j])
		cnt++;
		
		if(cnt==ans.size())
		ans.push_back(id[i]);
		
		if(ans.size()>k)
		{
			ans.erase(ans.begin());
		}
	}
	cout<<ans.size()<<endl;
	
	for(i=ans.size()-1;i>=0;i--)
	cout<<ans[i]<<" ";
}
