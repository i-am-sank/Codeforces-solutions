#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	if(n&1)
	{
		cout<<"YES"<<endl;
		vector<int> ans;
		ans.push_back(1);
		ans.push_back(1+n);
		int t=0,temp=1;
		while(t<n-2)
		{
			ans.push_back(ans[ans.size()-1]+temp);
			temp=temp>0?-temp-2:-temp+2;
			t++;
		//	cout<<temp<<" ";
		}
		temp=1;
		for(int i=0;i<n;i++)
		{
			ans.push_back(ans[i]+temp);
			temp=-temp;
		}
		for(int i=0;i<2*n;i++)
		cout<<ans[i]<<" ";
	}
	else
	cout<<"NO";
}
