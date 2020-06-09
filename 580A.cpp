#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,prev=1,ans=0;
	long long int a[100001];
	cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];

    for(i=0;i<n-1;i++)
    {
    	if(a[i]<=a[i+1])
    	prev++;
    	else
    	ans=max(prev,ans),prev=1;
	}
	ans=max(prev,ans);
	
	cout<<ans;
}
