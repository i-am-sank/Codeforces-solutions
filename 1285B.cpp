#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
	ll t,n,a[100001],i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll prevsum,cursum=0,m,sum=0,j=1;
		for( i=0;i<n;i++)
		cin>>a[i],sum+=a[i];
		bool flag = false;
		prevsum=a[0],m=a[0];
		for(i=1;i<n;i++)
		{
			if(prevsum+a[i]>a[i])
			cursum=prevsum+a[i],j++;
			else
			cursum=a[i];
			
			prevsum=cursum;
			m=max(m,cursum);
			if(sum==m&&i<n-1)
			{
				flag=true;
			}
		}
	//	cout<<sum<<" "<<m;	
		if(sum==m&&!flag&&j==n)
		{
			m=m-min(a[0],a[n-1]);
		}
	
		if(sum>m)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
