#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,f=0,a[100001];
	bool t=false;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==i)
		f++;
	}
	
	if(f==n)
	cout<<f;
	else{
		for(int i=0;i<n;i++)
	{
		
		if(i==a[a[i]]&&i!=a[i])
		{
		//	cout<<a[i]<<" "<<a[a[i]]<<endl;
			t=true;
			break;
		}
	}
	if(t)
	cout<<f+2;
	else
	cout<<f+1;
	}
	
}
