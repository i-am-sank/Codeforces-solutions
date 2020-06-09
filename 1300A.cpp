#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int n;
	int a[101];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		cin>>a[i];
		int cnt=0,sum=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==0)
			cnt++;
			
			sum+=a[i];
		}
		if(sum>0)
		{
			cout<<cnt<<endl;
		}
		else if(sum<0)
		{
			if(cnt+sum==0)
			cout<<cnt+1<<endl;
			else
			cout<<cnt<<endl;
		}
		else
		{
			if(cnt==0)
			cout<<"1"<<endl;
			else
			cout<<cnt<<endl;
		}
	}
}
