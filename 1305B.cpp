#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,ans=0;
	vector<int> a;
	string s;
	cin>>s;
	n=s.size();
	i=0,j=n-1;
	while(i<j)
	{
	   if(s[i]=='('&&s[j]==')')
	   a.push_back(i++),a.push_back(j--);
	   
	   	if(s[i]==')')
	   	i++;
	   	
	   	if(s[j]=='(')
	   	j--;
	   	
	}
	if(a.size()>0)
	{
		cout<<"1\n"<<a.size()<<endl;
		sort(a.begin(),a.end());
		
		for(i=0;i<a.size();i++)
		cout<<a[i]+1<<" ";
	}
	else
	cout<<"0";
}
