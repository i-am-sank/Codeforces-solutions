#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m,a[1001];
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=0;i<n;i++)
		cin>>a[i];
		long long int sum=0;
		for(int i=1;i<n;i++)
		sum+=a[i],a[i]=0;
		
		if(sum>=m-a[0])
		{
			a[0]=m;
		}
	
		else{
			a[0]=sum+a[0];
		
		}
		cout<<a[0]<<endl;
	}
}
