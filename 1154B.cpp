#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[101],n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	int temp=0;
	sort(a,a+n);
	set<int> s;
	for(int i=0;i<n-1;i++)
	{
		if(a[i+1]-a[i]>0)
		s.insert(a[i+1]-a[i]),temp++;
	}
	if(s.size()>1)
	cout<<"-1";
	else if(s.size()==0)
	cout<<"0";
	else
	{
		if(temp>1)
		{
		  cout<<*s.begin();
		}
		else
		{
		  cout<<(*s.begin()&1?*s.begin():*s.begin()/2);
		}
	}
}
