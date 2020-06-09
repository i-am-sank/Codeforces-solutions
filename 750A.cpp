#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	k=240-k;
	int i=0,m;
	while(k>0)
	{
		i++;
		m=5*i;
		k-=m;
		if(i>n)
		{
			cout<<n;
			break;
		}
	//	cout<<m<<" "<<k<<endl;
	}
	if(i<=n&&k<0)
	cout<<i-1;
	else if(i<=n&&k==0)
	cout<<i;
}
