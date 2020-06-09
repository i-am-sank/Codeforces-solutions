#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
ll a[300001];
int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll t,n,i;
	cin>>t;
	while(t--){
		cin>>n;
		bool cnt=false;
		for(i=0;i<n;i++)
		cin>>a[i];
	//	int c=0;
		for(i=1;i<n;i++)
		{
			if(a[i]<=a[i-1])
			cnt=true;
			
			if(cnt)
			{
				if(a[i]>=a[i-1])
				a[i]=a[i-1]-1;
			}
		}
		cnt=true;
		for(i=0;i<n;i++)
		{
			if(a[i]<0)
			cnt=false;
		}
		if(cnt)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
}
