#include<iostream>
using namespace std;
int main()
{
	int n,d,i,ans=0;
	long a[2001];
	cin>>n>>d;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<(n-1);i++)
	{   
		if(a[i]>=a[i+1])
		{
			ans+=(a[i]-a[i+1])/d+1;
			a[i+1]+=((a[i]-a[i+1])/d+1)*d;
		
		}
	}
	cout<<ans;
}
