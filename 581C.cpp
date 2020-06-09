#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[10]={0},x,j=0;
	long long int k,ans=0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		ans+=x/10;
		if(x<100)
		a[x%10]++;
	}
//	 for(int i=9;i>=0;i--)
//	 cout<<a[i]<<" ";
while(k>0)
{
    for(int i=9;i>=0;i--)
    {
       if(a[i]*(10-i)<=k)
       {
       	ans+=a[i];
       	if(i!=0)
       	a[0]+=a[i];
       	k-=a[i]*(10-i);
	   }
	   else
	   {
	   	ans+=k/(10-i);
	   	k=0;
	   	break;
	   }
//	   cout<<ans<<" ";
	}
}
	cout<<ans;
}
